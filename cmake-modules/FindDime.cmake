# - Find a Dime installation
# The current version of FindDime requires pkg-config to find simage.
# If the variable Dime_DIR is set, ${Dime_DIR}/lib/pkgconfig will
# be added to the pkg-config search path.
#
# The following scenarios have been testet and are (probably) working:
#   - Running Windows CMake from cygwin shell with cygwin supplied pkg-config
#     and simage.pc generated by autotools (containing unix style paths),
#     generating NMake Makefiles.
#
#   - Running Windows CMake from Windows shell with cygwin supplied
#     pkg-config, cygpath in PATH and simage.pc generated by autotools
#     (containing unix style paths), generating NMake Makefiles.
#
#   - Running Windows CMake from Windows shell with Windows port of pkg-config
#     distributed with GTK+ and simage.pc generated by autotools (containing
#     unix style paths), generating NMake Makefiles.
#
#   - Running Windows CMake from cygwin shell with Windows port of pkg-config
#     distributed with GTK+ and simage.pc generated by autotools (containing
#     unix style paths), generating NMake Makefiles. In this instance
#     Dime_DIR must be set as a Windows style path.
#
# The following variables are set if Dime is found.  If Dime is not
# found, Dime_FOUND is set to false.
#  Dime_FOUND          - Set to true when Dime is found
#  Dime_VERSION_STRING - The Dime version number
#  Dime_INCLUDE_DIRS   - Include directories for Dime
#  Dime_LIBRARY_DIRS   - Link directories for Dime
#  Dime_LIBRARIES      - Libriaries that must be linked
#  Dime_LIBRARY        - Same as Dime_LIBRARIES
#  Dime_DEFINITIONS    - Define flags to the compiler
#

IF(USE_SIM_FIND)
  # FIXME: Experimental find mechanism. Should be tested on several platforms with several
  # configurations and someone extended before becomming the one and only thing. 20081105 larsm
  INCLUDE(SimFind)
  SIM_FIND(dime RELEASELIBNAMES dime1 dime
                  DEBUGLIBNAMES dime1d dimed
                  INCLUDEFILE dime.h)
ELSE(USE_SIM_FIND)
  INCLUDE(FindPkgConfig)

  IF (PKG_CONFIG_FOUND)
    IF (Dime_DIR)
      SET(Dime_OLD_PKG_CONFIG_PATH $ENV{PKG_CONFIG_PATH})
      SET(ENV{PKG_CONFIG_PATH} "${Dime_DIR}/lib/pkgconfig")
    ENDIF (Dime_DIR)

    MESSAGE(STATUS "PKG_CONFIG_PATH: " $ENV{PKG_CONFIG_PATH})
    pkg_search_module(Dime dime)

    # restore old PKG_CONFIG_PATH
    IF (Dime_DIR)
      SET(EVN{PKG_CONFIG_PATH} ${Dime_OLD_PKG_CONFIG_PATH})
    ENDIF (Dime_DIR)

    IF (Dime_FOUND)
      IF (NOT Dime_FIND_QUIETLY)
        MESSAGE(STATUS "Dime located using pkg-config.")
      ENDIF (NOT Dime_FIND_QUIETLY)

      SET(Dime_DEFINITIONS ${Dime_CFLAGS_OTHER})
      SET(Dime_VERSION_STRING ${Dime_VERSION})

      IF (MSVC)
        # convert gcc style defines to MSVC style defines
        STRING(REPLACE "-D" "/D" Dime_DEFINITIONS ${Dime_DEFINITIONS})

        # If "cygpath" is available, try to convert unix style paths
        # to win style paths. If the paths are win style to begin with
        # "cygpath" will do nothing. If "cygpath" isn't available, the
        # paths are not likely to be unix style anyway.
        FIND_PROGRAM(Dime_CYGPATH cygpath)
        IF (Dime_CYGPATH)

          # convert unix style include paths to win include paths
          EXECUTE_PROCESS(COMMAND ${Dime_CYGPATH} -w ${Dime_INCLUDE_DIRS}
                          OUTPUT_VARIABLE Dime_INCLUDE_DIRS
                          OUTPUT_STRIP_TRAILING_WHITESPACE)

          # make sure all includes stays on one line
          STRING(REGEX REPLACE "\n" " " Dime_INCLUDE_DIRS "${Dime_INCLUDE_DIRS}")

          # convert unix style libdir paths to win libdir paths
          EXECUTE_PROCESS(COMMAND ${Dime_CYGPATH} -w ${Dime_LIBRARY_DIRS}
                          OUTPUT_VARIABLE Dime_LIBRARY_DIRS
                          OUTPUT_STRIP_TRAILING_WHITESPACE)

          # make sure all libdirs stays on one line
          STRING(REGEX REPLACE "\n" " " Dime_LIBRARY_DIRS "${Dime_LIBRARY_DIRS}")

        ENDIF (Dime_CYGPATH)

      ENDIF (MSVC)
      SET(Dime_LIBRARY ${Dime_LIBRARIES})

    ELSE (Dime_FOUND)
      IF (Dime_FIND_REQUIRED)
        MESSAGE(FATAL_ERROR "Couldn't locate dime using pkg-config.")

      ELSE (Dime_FIND_REQUIRED)
        IF (NOT Dime_FIND_QUIETLY)
          MESSAGE(STATUS "Couldn't locate dime using pkg-config.")
        ENDIF (NOT Dime_FIND_QUIETLY)

      ENDIF (Dime_FIND_REQUIRED)
    ENDIF(Dime_FOUND)

  ELSE (PKG_CONFIG_FOUND)
    IF (Dime_FIND_REQUIRED)
      MESSAGE(FATAL_ERROR "pkg-config required by FindDime.cmake")

    ELSE (Dime_FIND_REQUIRED)
      IF (NOT Dime_FIND_QUIETLY)
        MESSAGE(STATUS "pkg-config required by FindDime.cmake")
      ENDIF (NOT Dime_FIND_QUIETLY)

    ENDIF (Dime_FIND_REQUIRED)

  ENDIF(PKG_CONFIG_FOUND)
ENDIF(USE_SIM_FIND)
