Coindesigner
============

Coindesigner is a RAD (rapid application development) system to build 3D applications 
using Coin3D openInventor. It allows to write simple 3D scenarios just using 
drag&drop, so users require no programming skills to use it. 

Coindesigner was originally written by [Jose M. Espadero](https://github.com/jmespadero) and Tomas Aguado (2004-2008).

This set or programs is licensed under the GPL, please read the file [https://www.gnu.org/licenses/gpl.html](GPL.txt) for more details about the license.

Please, note that executable files are also affected by the licenses of 
[QT](https://www.qt.io/licensing/) and [Coin3D](https://bitbucket.org/Coin3D/coin/wiki/Home). 
Please, refer to their respective licenses for more details.


## DESCRIPTION

coindesigner is a system equivalent to Gtk-glade or Qt-designer, where we can
choose components from the openInventor toolkit, add them somewhere in our
scene and configure them in a very easy way... and all changes are applied
to the scene on the fly!

The project also includes cdsview, a minimalistic external viewer that allows
to distribute the scenarios without need of the RAD in most modern OS.

Some features of the tool are:

    * Reads and write scenes in native openInventor file format (.iv)
    * Can import geometry from VRML, 3DS, OFF (from geomview), SMF, 
        alias/wavefront(.obj), sphereTree (.sph) and XYZ point clouds file formats. 
    * Exports geometry to VRML2, SMF, OBJ, STL, OFF and XYZ file formats.
    * It includes cdsview, an minimalistic external viewer that allows
      you to view and distribute scenes without need of coindesigner.
    * Allows to use manips to configure SpotLights, PointLights and 
      Transform nodes. Just use the right mouse button to interchange 
      between those nodes and his manip!
    * GUI has been translated to English and Spanish, if you want to help
      us to translate to your languaje write the author. A translation work
      takes just about 90 minutes using Qt-Linguist.
    * Includes the complete coin reference and several step by step
      tutorials directly brownsables from the application.
    * Allow some operations as mesh reduction (with QSLIM), scene
      simplification (ivfix), mesh triangulation and convex hull
      computation.
    * Support for volume rendering using SIM Voleon.
    * It's open source released under GPL license. 

## COIN3D REFERENCE AND TUTORIALS

The coin3d reference and the step by step tutorials of coindesigner
are now packed in separate files. You can download them from the
downloads section in http://coindesigner.sourceforge.net and
unpack in the same directory where the executable of coindesigner is.
If reference directory is not found, coindesigner will try to access to
an online version of the reference.

Default languaje is english. If you want to see coindesigner in your own
languaje then you have to define the LANG enviroment variable to be one of
EN (for English), ES (for Spanish) or PT (for Portuguese) and then run 
coindesigner. Please, ensure that the translation files (*.qs) are found 
in the current directory.

## BUILDING FROM THE SOURCES (LINUX)

### Dependencies
You will need this libraries installed and working:
 
 * Qt version 4.3.2 or newer.
 * Simage, Coin3D and SoQt. 
 * Dime, if you want support for DXF file format
 * A standar C++ compiler and toolchain
 
Usually you can get this packages with the command:

```
    apt-get install g++ bison flex make 
    apt-get install libqt4-dev libsimage-dev libcoin80-dev libdime-dev libsoqt4-dev 
```

Optionally, you can use SIM Voleon to visualice volumetric data. Visit 
   https://bitbucket.org/Coin3D/simvoleon to read how to download and install these libraries.

### Building coindesigner and cdsview (linux)

Clone the source from this reposity, and run make with the coindesigner.make file

```
   git clone https://github.com/jmespadero/coindesigner.git
   cd coindesigner
   make -f coindesigner.make 
```

Alternatively, you can use cmake to build the program:

```
git clone https://github.com/jmespadero/coindesigner.git
mkdir coindesigner-build
cd coindesigner-build
cmake ../coindesigner
make   
```

To use the translation files, you must run coindesigner in the 
same directory that the `coindesigner_your_language.qm` file. Please
ensure that the LANG enviroment variable is adecuate to your language.

### Optional packages

#### QSlim

The mesh reduction tool is based in QSLIM, an algorithm designed and 
coded by Michael Garland. To use qslim, you must download it from the web
http://mgarland.org/software/qslim21.html and put the 
executable of QSLIM in the same directory of coindesigner (or elsewhere
in the path). You will see if QSLIM is available in the "help->about" menu.

Note: If you don't want to compile qslim, can download binaries from here:
http://mgarland.org/software/qslim20.html


## ACKNOWLEDGES

"If I have seen further, it is by standing upon the shoulders of giants"
(Isaac Newton, but I found it in Oscar Robles PhD)
Well, most of my giants are working on the [Modelling and Virtual Reality
Group](http://www.gmrv.es) of the Rey Juan Carlos university. Their names are Marcos, Sofía, Oscar,
Susana, Pablo, Luis, Angel, Luismi, Cesar, Carolina, and many more people that
work in the group.

The 3ds importer is part of coin3d package and was developed by PC John.
This piece of code is usually available when you compile coin3D with
the "--enable-3ds" flags, which is not the default. To avoid everybody 
to have to recompile coin3d, we decided to incorporate those file to
our project

Most icons used in coindesigner UI are part of Crystal Icons. This icon 
theme was created by Everaldo Coelho and the Crystal Artists Staff. 
Svg icons are from the [tango project](http://tango.freedesktop.org/)

Icons for sceneGraph nodes are based on "Dia Shapes for Open Inventor Scenegraphs",
package, compiled by Alejandro Sierra.
 
The ivfix code used inside of coindesigner was originally written by 
the SGI crew, and released as GPL code in 2000. 

The qslim program was written by Michael Garland and released under the 
GPL. The web of the author is http://mgarland.org

The convex hull calculator is based in QHullLib, which was writen by 
John W. Ratcliff. It is an adaptation of the qhull program to allow 
an easy way to use qhull routines using C++, without need to call any
external program. It's not easy to find the standalone qhulllib code
(due broken links :-( ), but it can be found inside ODFRocket, an open
framework which has Copyright (c) 2004 Open Dynamics Framework Group.
Please, read README_qhulllib.txt and README_qhull.txt for more details.

The CMakeLists.txt file necessary to build the app using cmake was written
by Leopold Palomo-Avellaneda for his own fork of coindesigner.

Last but not least, many fragment of coindesigner are based on examples found in
the Coin3D and Qt documentation. We would like to acknowledge that work and 
the help received from Lars J. Aas, Morten Eriksen and Peder Blekken from 
Kongsberg SIM (aka System in Motion) through the coin-discuss mail list.
They are the Coin on Coindesigner.


