/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "src/cds_parser.y"

/*
    This file is part of coindesigner.

    coindesigner is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    coindesigner is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with coindesigner; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

/* Gramatica de Bison que genera escenas de openInventor a partir de
   ficheros en los siguientes formatos:
     -Geomview: soporta ficheros OFF, COFF, NOFF, NCOFF, STOFF
     -SMF, OBJ
     -XYZ : Nubes de puntos (3 coordenadas por línea de fichero)
     -SPH : Arboles de esferas 
*/

#define YYERROR_VERBOSE
#define YYSTYPE_IS_DECLARED 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "cds_globals.h"

/* Nodos de openInventor que necesitamos */
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoCoordinate3.h>
#include <Inventor/nodes/SoIndexedPointSet.h>
#include <Inventor/nodes/SoIndexedLineSet.h>
#include <Inventor/nodes/SoIndexedFaceSet.h>
#include <Inventor/nodes/SoFaceSet.h>
#include <Inventor/nodes/SoPointSet.h>
#include <Inventor/nodes/SoNormal.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/nodes/SoMaterialBinding.h>
#include <Inventor/nodes/SoTexture2.h>
#include <Inventor/nodes/SoTextureCoordinate2.h>
#include <Inventor/nodes/SoBlinker.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoTranslation.h>

/* Variables para almacenar la información */
SoSeparator *yyGeometry;
SoCoordinate3 *yyCoordinate3;
SoIndexedPointSet *yyIndexedPointSet;
SoIndexedLineSet *yyIndexedLineSet;
SoIndexedFaceSet *yyIndexedFaceSet;
SoFaceSet *yyFaceSet;
SoNormal *yyNormal;
SoMaterial *yyMaterial;
SoTextureCoordinate2 *yyTextureCoordinate2;
SoMaterialBinding *yyMaterialBinding;
bool yyMaterialBindingUsed;
SoBlinker *yyBlinker;

/* numero de puntos y de facetas */
unsigned int yyNumeroFacetas;
unsigned int yyNumeroPuntos;

/* variable que almacena el numero de puntos leidos */
int num_puntos=0;

/*variable que almacena el numero de facetas leidas*/
int num_facetas=0;

/* Depth y brach de los arboles de esferas .sph */
int yy_sph_depth;
int yy_sph_branch;
int yy_sph_num;
int yy_sph_l;
SoSeparator *yy_sph_l_sep;

bool yy_outerloop=false;
unsigned yy_loopsize=false;

/* Variable para almacenar coordenadas de textura de ficheros .obj */
SoMFVec2f *yy_texture_coord = NULL;

/* Las siguientes funciones se implementan al final de este fichero */

void yyerror(const char *s);

/* Funcion que lee del fichero hasta un salto de linea */
void ignora_resto_linea();

/* Funcion que lee un numero del fichero, sea entero o real */
float LeeReal ();

/* Funcion que lee un numero del fichero, obligatoriamente entero. */
int LeeEntero ();

/* Función que trata un bloque OFF/COFF/NOFF/NCOFF/STOFF */
void LeeBloqueOFF (int nPuntos, int nCaras, int tipoBloqueOFF);

/* Variable que indica al scanner si debe mostrar los saltos de linea */
extern int yy_ver_LF;


/* Line 268 of yacc.c  */
#line 183 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _OFF = 258,
     _COFF = 259,
     _NOFF = 260,
     _NCOFF = 261,
     _STOFF = 262,
     _LIST = 263,
     _APPEARANCE = 264,
     _FILE = 265,
     _LF = 266,
     _MTLLIB = 267,
     _USEMTL = 268,
     _BEGIN = 269,
     _END = 270,
     _BIND = 271,
     _FACE = 272,
     _TEX = 273,
     _SOLID = 274,
     _ASCII = 275,
     _FACET = 276,
     _NORMAL = 277,
     _OUTER = 278,
     _LOOP = 279,
     _VERTEX = 280,
     _ENDLOOP = 281,
     _ENDFACET = 282,
     _ENDSOLID = 283,
     _ENTERO = 284,
     _REAL = 285,
     _CADENA = 286
   };
#endif
/* Tokens.  */
#define _OFF 258
#define _COFF 259
#define _NOFF 260
#define _NCOFF 261
#define _STOFF 262
#define _LIST 263
#define _APPEARANCE 264
#define _FILE 265
#define _LF 266
#define _MTLLIB 267
#define _USEMTL 268
#define _BEGIN 269
#define _END 270
#define _BIND 271
#define _FACE 272
#define _TEX 273
#define _SOLID 274
#define _ASCII 275
#define _FACET 276
#define _NORMAL 277
#define _OUTER 278
#define _LOOP 279
#define _VERTEX 280
#define _ENDLOOP 281
#define _ENDFACET 282
#define _ENDSOLID 283
#define _ENTERO 284
#define _REAL 285
#define _CADENA 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 286 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    46,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     2,    37,    43,     2,     2,     2,     2,    36,     2,
      42,    44,    35,     2,    40,    45,    41,     2,    34,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    12,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    36,    39,
      43,    46,    48,    51,    56,    61,    66,    71,    76,    79,
      81,    85,    90,    96,    99,   103,   108,   118,   126,   138,
     143,   147,   151,   155,   160,   166,   172,   177,   179,   181,
     183,   185,   187,   189,   191,   194,   196,   201,   202,   207,
     210,   212,   218,   219,   225,   228,   230,   234,   242,   243,
     247,   251,   254,   256
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    49,    53,    -1,    -1,    50,    63,
      -1,    -1,    51,    61,    -1,    65,    -1,    69,    -1,    30,
      -1,    29,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,    60,    -1,    55,    53,    -1,     8,    54,    -1,    32,
      53,    33,    -1,    53,    54,    -1,    53,    -1,     9,    32,
      -1,     3,    29,    29,    29,    -1,     4,    29,    29,    29,
      -1,     5,    29,    29,    29,    -1,     6,    29,    29,    29,
      -1,     7,    29,    29,    29,    -1,    61,    62,    -1,    62,
      -1,    14,    61,    15,    -1,    34,    52,    52,    52,    -1,
      34,    52,    52,    52,    52,    -1,    35,    29,    -1,    36,
      29,    29,    -1,    37,    29,    29,    29,    -1,    37,    29,
      38,    38,    29,    29,    38,    38,    29,    -1,    37,    29,
      38,    29,    29,    38,    29,    -1,    37,    29,    38,    29,
      38,    29,    29,    38,    29,    38,    29,    -1,    39,    52,
      52,    52,    -1,    16,    39,    25,    -1,    16,    39,    17,
      -1,    40,    52,    52,    -1,    34,    41,    52,    52,    -1,
      34,    41,    52,    52,    52,    -1,    34,    42,    52,    52,
      52,    -1,    34,    35,    52,    52,    -1,    18,    -1,    43,
      -1,    44,    -1,    45,    -1,    12,    -1,    13,    -1,    46,
      -1,    63,    64,    -1,    64,    -1,    52,    52,    52,    11,
      -1,    -1,    29,    29,    66,    67,    -1,    67,    68,    -1,
      68,    -1,    52,    52,    52,    52,    52,    -1,    -1,    70,
      19,    20,    71,    28,    -1,    71,    72,    -1,    72,    -1,
      21,    73,    27,    -1,    21,    22,    52,    52,    52,    73,
      27,    -1,    -1,    23,    74,    73,    -1,    24,    75,    26,
      -1,    75,    76,    -1,    76,    -1,    25,    52,    52,    52,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   128,   140,   140,   163,   163,   229,   232,
     236,   237,   240,   241,   242,   243,   244,   245,   246,   247,
     250,   251,   254,   286,   293,   300,   307,   314,   321,   322,
     323,   326,   332,   338,   367,   401,   439,   480,   522,   576,
     582,   588,   594,   601,   608,   620,   627,   632,   653,   658,
     662,   666,   670,   674,   681,   682,   685,   694,   693,   731,
     732,   735,   783,   783,   800,   801,   804,   805,   808,   808,
     809,   817,   818,   821
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_OFF", "_COFF", "_NOFF", "_NCOFF",
  "_STOFF", "_LIST", "_APPEARANCE", "_FILE", "_LF", "_MTLLIB", "_USEMTL",
  "_BEGIN", "_END", "_BIND", "_FACE", "_TEX", "_SOLID", "_ASCII", "_FACET",
  "_NORMAL", "_OUTER", "_LOOP", "_VERTEX", "_ENDLOOP", "_ENDFACET",
  "_ENDSOLID", "_ENTERO", "_REAL", "_CADENA", "'{'", "'}'", "'v'", "'p'",
  "'l'", "'f'", "'/'", "'c'", "'r'", "'t'", "'n'", "'g'", "'o'", "'s'",
  "'$'", "$accept", "fich_geom", "$@1", "$@2", "$@3", "REAL",
  "bloque_oogl", "_bloques_oogl", "bloque_appearance", "bloque_off",
  "bloque_coff", "bloque_noff", "bloque_ncoff", "bloque_stoff",
  "bloque_SMF", "linea_SMF", "bloque_XYZ", "linea_XYZ", "fichero_SPH",
  "$@4", "bloque_SPH", "linea_SPH", "fichero_STL", "$@5", "bloque_STL",
  "facet_STL", "loop_STL", "$@6", "bloque_loop_STL", "vertex_STL", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   123,   125,   118,   112,   108,   102,    47,    99,
     114,   116,   110,   103,   111,   115,    36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    48,    50,    48,    51,    48,    48,    48,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    56,    57,    58,    59,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    66,    65,    67,
      67,    68,    70,    69,    71,    71,    72,    72,    74,    73,
      73,    75,    75,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     1,     2,     4,     4,     4,     4,     4,     2,     1,
       3,     4,     5,     2,     3,     4,     9,     7,    11,     4,
       3,     3,     3,     4,     5,     5,     4,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     4,     0,     4,     2,
       1,     5,     0,     5,     2,     1,     3,     7,     0,     3,
       3,     2,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     0,     0,     0,     8,     9,     0,    57,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,    12,    13,    14,    15,    16,    11,    10,     0,     5,
      55,    51,    52,     0,     0,    47,     0,     0,     0,     0,
       0,     0,    48,    49,    50,    53,     7,    29,     0,     0,
       0,     0,     0,     0,     0,    21,    18,    22,     0,    17,
       0,    54,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,    28,     0,     0,    58,    60,     0,     0,
       0,     0,     0,    20,    19,     0,    30,    41,    40,     0,
       0,     0,     0,    34,     0,     0,     0,    42,     0,     0,
      65,     0,    59,    23,    24,    25,    26,    27,    56,    46,
      43,     0,    31,    35,     0,     0,    39,     0,    68,     0,
       0,    63,    64,     0,    44,    45,    32,     0,     0,     0,
       0,     0,     0,     0,    72,    66,     0,     0,     0,     0,
       0,    69,     0,    70,    71,    61,    37,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    36,    67,     0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    28,    55,    56,    20,    21,
      22,    23,    24,    25,    46,    47,    29,    30,     6,    49,
      76,    77,     7,     8,    99,   100,   120,   131,   133,   134
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
      -2,   -11,    20,    46,    37,    93,  -121,  -121,     3,  -121,
    -121,     5,    11,    45,    47,    48,    46,    43,    46,  -121,
      46,  -121,  -121,  -121,  -121,  -121,  -121,  -121,    37,    37,
    -121,  -121,  -121,    93,    40,  -121,    30,    51,    52,    56,
      37,    37,  -121,  -121,  -121,  -121,   143,  -121,    66,    37,
      58,    59,    61,    62,    63,    46,  -121,  -121,    60,  -121,
      37,  -121,   108,    16,    37,    37,    37,    37,  -121,    65,
     -19,    37,    37,  -121,    75,    37,    37,  -121,    68,    69,
      70,    71,    72,  -121,  -121,    92,  -121,  -121,  -121,    37,
      37,    37,    37,  -121,    81,   -15,    37,  -121,    34,    14,
    -121,    37,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
      37,    37,    37,  -121,   -13,    84,  -121,    37,  -121,    90,
      89,  -121,  -121,    37,  -121,  -121,  -121,    79,    96,   102,
      37,    22,    37,    44,  -121,  -121,    37,   105,   106,    80,
      37,  -121,    37,  -121,  -121,  -121,  -121,   103,   111,    22,
      37,   117,   121,   113,  -121,   119,  -121,  -121,   129,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,  -121,  -121,   -28,     6,    64,  -121,  -121,
    -121,  -121,  -121,  -121,   127,   -31,  -121,   133,  -121,  -121,
    -121,    87,  -121,  -121,  -121,    67,  -120,  -121,  -121,    31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      60,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    67,    19,
      94,   141,    71,    72,   114,    73,   127,   -62,     9,    95,
      10,    75,    48,   115,    58,   128,    59,     1,    -4,   153,
      -2,    73,    85,    87,    50,    98,    89,    90,    91,    92,
      51,    88,   121,    96,    97,   118,   119,   101,    75,    11,
      12,    13,    14,    15,    16,    17,   117,   118,   119,    26,
      27,   109,   110,   111,   112,    64,    26,    27,   116,   132,
     143,    65,    66,   123,    52,    57,    53,    54,    18,    63,
      68,    69,   124,   125,   126,    70,    74,    78,    79,   130,
      80,    81,    82,    84,    93,   136,    98,   103,   104,   105,
     106,   107,   140,   108,   142,    31,    32,    33,   145,    34,
     113,    35,   149,   129,   150,   132,   135,   137,   148,    83,
      31,    32,   154,    86,    34,   138,    35,    36,    37,    38,
      39,   139,    40,    41,   146,   147,    42,    43,    44,    45,
     157,   151,    36,    37,    38,    39,   155,    40,    41,   152,
     156,    42,    43,    44,    45,    31,    32,   158,   159,    34,
      62,    35,    61,   102,   144,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,    38,
      39,     0,    40,    41,     0,     0,    42,    43,    44,    45
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-121))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      28,     3,     4,     5,     6,     7,     8,     9,    36,     3,
      29,   131,    40,    41,    29,    46,    29,    19,    29,    38,
       0,    49,    19,    38,    18,    38,    20,    29,    30,   149,
      32,    62,    60,    17,    29,    21,    64,    65,    66,    67,
      29,    25,    28,    71,    72,    23,    24,    75,    76,     3,
       4,     5,     6,     7,     8,     9,    22,    23,    24,    29,
      30,    89,    90,    91,    92,    35,    29,    30,    96,    25,
      26,    41,    42,   101,    29,    32,    29,    29,    32,    39,
      29,    29,   110,   111,   112,    29,    20,    29,    29,   117,
      29,    29,    29,    33,    29,   123,    21,    29,    29,    29,
      29,    29,   130,    11,   132,    12,    13,    14,   136,    16,
      29,    18,   140,    29,   142,    25,    27,    38,    38,    55,
      12,    13,   150,    15,    16,    29,    18,    34,    35,    36,
      37,    29,    39,    40,    29,    29,    43,    44,    45,    46,
      27,    38,    34,    35,    36,    37,    29,    39,    40,    38,
      29,    43,    44,    45,    46,    12,    13,    38,    29,    16,
      33,    18,    29,    76,   133,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    43,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    48,    49,    50,    51,    65,    69,    70,    29,
       0,     3,     4,     5,     6,     7,     8,     9,    32,    53,
      55,    56,    57,    58,    59,    60,    29,    30,    52,    63,
      64,    12,    13,    14,    16,    18,    34,    35,    36,    37,
      39,    40,    43,    44,    45,    46,    61,    62,    19,    66,
      29,    29,    29,    29,    29,    53,    54,    32,    53,    53,
      52,    64,    61,    39,    35,    41,    42,    52,    29,    29,
      29,    52,    52,    62,    20,    52,    67,    68,    29,    29,
      29,    29,    29,    54,    33,    52,    15,    17,    25,    52,
      52,    52,    52,    29,    29,    38,    52,    52,    21,    71,
      72,    52,    68,    29,    29,    29,    29,    29,    11,    52,
      52,    52,    52,    29,    29,    38,    52,    22,    23,    24,
      73,    28,    72,    52,    52,    52,    52,    29,    38,    29,
      52,    74,    25,    75,    76,    27,    52,    38,    29,    29,
      52,    73,    52,    26,    76,    52,    29,    29,    38,    52,
      52,    38,    38,    73,    52,    29,    29,    27,    38,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 128 "src/cds_parser.y"
    {
    /* Preparamos para leer OOGL */
    yyGeometry = new SoSeparator();
    yyNumeroFacetas = 0;
    yyNumeroPuntos = 0;
    yylinenum = 1;
  }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 136 "src/cds_parser.y"
    {
  }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 140 "src/cds_parser.y"
    {
     /* Preparamos para leer XYZ */
     yyGeometry = new SoSeparator();
     yyCoordinate3 = new SoCoordinate3();

     /* Añadimos los puntos al resultado */
     yyGeometry->addChild(yyCoordinate3);
     yyGeometry->addChild(new SoPointSet() );

     yyNumeroFacetas = 0;
     yyNumeroPuntos = 0;
     yylinenum = 1;

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;
  }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 157 "src/cds_parser.y"
    {
     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;
  }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 163 "src/cds_parser.y"
    {
     /* Preparamos para leer SMF */
     yyGeometry = new SoSeparator();
     yyCoordinate3 = new SoCoordinate3();
     yyIndexedPointSet = new SoIndexedPointSet();
     yyIndexedPointSet->coordIndex.setNum(0);
     yyIndexedLineSet = new SoIndexedLineSet();
     yyIndexedLineSet->coordIndex.setNum(0);
     yyIndexedFaceSet = new SoIndexedFaceSet();
     yyIndexedFaceSet->coordIndex.setNum(0);
     yyTextureCoordinate2 = new SoTextureCoordinate2;
     yyNormal = new SoNormal();

     yyMaterialBinding=new SoMaterialBinding();
     yyMaterialBinding->value=SoMaterialBinding::PER_VERTEX;
     yyMaterialBindingUsed = false;
     yyMaterial=new SoMaterial();
     yyMaterial->diffuseColor.setNum(0);

     yyGeometry->addChild(yyCoordinate3);
     yyGeometry->addChild(yyMaterialBinding);
     yyGeometry->addChild(yyMaterial);
     yyGeometry->addChild(yyNormal);
     yyGeometry->addChild(yyTextureCoordinate2);
     yyGeometry->addChild(yyIndexedPointSet);
     yyGeometry->addChild(yyIndexedLineSet);
     yyGeometry->addChild(yyIndexedFaceSet);

     //En ocasiones los fichero contienen información de textura
     //Pero los indices son diferentes a openInventor, por lo que
     //necesitamos una tabla auxiliar
     yy_texture_coord = new SoMFVec2f() ;

     yyNumeroFacetas = 0;
     yyNumeroPuntos = 0;
     yylinenum = 1;
  }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 201 "src/cds_parser.y"
    {
     //Clean unused nodes in the scene tree
     if (!yyMaterialBindingUsed)
       yyGeometry->removeChild(yyMaterialBinding);

     if (yy_texture_coord->getNum() < 1)
       yyGeometry->removeChild(yyTextureCoordinate2);

     if (yyNormal->vector.getNum() < 1)
       yyGeometry->removeChild(yyNormal);

     if (yyMaterial->diffuseColor.getNum() < 1)
         yyGeometry->removeChild(yyMaterial);

     if (yyIndexedPointSet->coordIndex.getNum() < 1)
       yyGeometry->removeChild(yyIndexedPointSet);

     if (yyIndexedLineSet->coordIndex.getNum() < 1)
       yyGeometry->removeChild(yyIndexedLineSet);

     if (yyIndexedFaceSet->coordIndex.getNum() < 1)
       yyGeometry->removeChild(yyIndexedFaceSet);

     //Liberamos espacio de información de textura
     delete yy_texture_coord;
  }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 236 "src/cds_parser.y"
    {(yyval.real) = (yyvsp[(1) - (1)].real); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 237 "src/cds_parser.y"
    {(yyval.real) = (yyvsp[(1) - (1)].entero);}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 255 "src/cds_parser.y"
    {
     /* Ignoramos el contenido por ahora */
     int tipo, num_llaves;
     num_llaves = 1;
     while (num_llaves > 0)
     {
       tipo = yylex();
       if (tipo == '{') num_llaves++;
       else if (tipo == '}') num_llaves--;
       else if (tipo == _FILE)
       {
          tipo = yylex();
          if (tipo == _CADENA)
          {
             //Eliminamos las comillas del final
             yylval.pchar[strlen(yylval.pchar)-1] = 0;

             //Creamos un nodo Texture2
             SoTexture2 *yyTexture2 = new SoTexture2;
             yyGeometry->addChild(yyTexture2);

             //Metemos el nombre del fichero, sin las comillas iniciales
             yyTexture2->filename.setValue(yylval.pchar+1);

          }
       }
     } // while
  }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 287 "src/cds_parser.y"
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[(2) - (4)].entero), (yyvsp[(3) - (4)].entero), _OFF);
  }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 294 "src/cds_parser.y"
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[(2) - (4)].entero), (yyvsp[(3) - (4)].entero), _COFF);
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 301 "src/cds_parser.y"
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[(2) - (4)].entero), (yyvsp[(3) - (4)].entero), _NOFF);
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 308 "src/cds_parser.y"
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[(2) - (4)].entero), (yyvsp[(3) - (4)].entero), _NCOFF);
  }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 315 "src/cds_parser.y"
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[(2) - (4)].entero), (yyvsp[(3) - (4)].entero), _STOFF);
  }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 327 "src/cds_parser.y"
    {
     // Almacenamos las coordenadas cartesianas.
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[(2) - (4)].real), (yyvsp[(3) - (4)].real), (yyvsp[(4) - (4)].real));
  }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 333 "src/cds_parser.y"
    {
     // Almacenamos las coordenadas racionales.
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[(2) - (5)].real)/(yyvsp[(5) - (5)].real), (yyvsp[(3) - (5)].real)/(yyvsp[(5) - (5)].real), (yyvsp[(4) - (5)].real)/(yyvsp[(5) - (5)].real));
  }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 339 "src/cds_parser.y"
    {
     // generamos un nuevo punto
     int k = yyIndexedPointSet->coordIndex.getNum();
     yyIndexedPointSet->coordIndex.set1Value(k++, (yyvsp[(2) - (2)].entero) -1);

     //Miramos si hay más vertices en esta nube de puntos

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;

     //Leemos hasta el fin de linea, insertando los vertices
     int tipo = yylex();
     while (tipo == _ENTERO)
     {
        yyIndexedPointSet->coordIndex.set1Value(k++,yylval.entero-1);
        tipo = yylex();
     }

     if (tipo != _LF)
     {
        yyerror("Format error in integer number.\n");
        return -1;
     }

     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;
  }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 368 "src/cds_parser.y"
    {
     // generamos una nueva polilinea de 2 o mas vertices

     int k = yyIndexedLineSet->coordIndex.getNum();
     yyIndexedLineSet->coordIndex.set1Value(k++, (yyvsp[(2) - (3)].entero) -1);
     yyIndexedLineSet->coordIndex.set1Value(k++, (yyvsp[(3) - (3)].entero) -1);

     //Miramos si hay más vertices en esta polilinea

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;

     //Leemos hasta el fin de linea, insertando los vertices
     int tipo = yylex();
     while (tipo == _ENTERO)
     {
        yyIndexedLineSet->coordIndex.set1Value(k++,yylval.entero-1);
        tipo = yylex();
     }

     if (tipo != _LF)
     {
        yyerror("Format error in integer number.\n");
        return -1;
     }

     //Insertamos la marca de fin de polilinea
     yyIndexedLineSet->coordIndex.set1Value(k++, -1);

     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;
  }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 402 "src/cds_parser.y"
    {
     // generamos una nueva faceta de 3 o mas vertices

     int k = yyIndexedFaceSet->coordIndex.getNum();
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(2) - (4)].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(3) - (4)].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(4) - (4)].entero) -1);

     //Miramos si hay más vertices en esta faceta

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;

     //Leemos hasta el fin de linea, insertando los vertices
     int tipo = yylex();
     while (tipo == _ENTERO)
     {
        yyIndexedFaceSet->coordIndex.set1Value(k++,yylval.entero-1);
        tipo = yylex();
     }

     if (tipo != _LF)
     {
        yyerror("Format error in integer number.\n");
        return -1;
     }

     //Insertamos la marca de fin de faceta
     yyIndexedFaceSet->coordIndex.set1Value(k++, -1);

     //Incrementamos la cuenta de facetas
     yyNumeroFacetas++;

     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;
  }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 440 "src/cds_parser.y"
    {
     /* generamos una nueva faceta, ignorando resto de informacion */
     int k = yyIndexedFaceSet->coordIndex.getNum();

     //Por ahora hemos leido 2 valores
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(2) - (9)].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(6) - (9)].entero) -1);

     //Salvamos las coordenadas de normal
     yyIndexedFaceSet->normalIndex.set1Value(k-2, (yyvsp[(5) - (9)].entero) -1);
     yyIndexedFaceSet->normalIndex.set1Value(k-1, (yyvsp[(9) - (9)].entero) -1);

     //Miramos si hay más vertices en esta faceta

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;

     //Leemos hasta el fin de linea
     while (yylex() == _ENTERO)
     {
        yyIndexedFaceSet->coordIndex.set1Value(k++, yylval.entero -1);

        //Ignoramos los 2 campos siguientes ( / / )
        yylex();
        yylex();

        //Leemos la coordenada de normal (vn)
        int idn = LeeEntero() - 1;
        yyIndexedFaceSet->normalIndex.set1Value(k-1, idn);

     }

     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;

     //Cerramos la faceta actual
     yyIndexedFaceSet->coordIndex.set1Value(k++, -1);
     yyIndexedFaceSet->normalIndex.set1Value(k-1, -1);
     yyNumeroFacetas++;
  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 481 "src/cds_parser.y"
    {
     /* generamos una nueva faceta, ignorando resto de informacion */
     int k = yyIndexedFaceSet->coordIndex.getNum();

     //Por ahora hemos leido 2 valores
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(2) - (7)].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(5) - (7)].entero) -1);

     //Salvamos las coordenadas de textura
     yyTextureCoordinate2->point.set1Value((yyvsp[(2) - (7)].entero)-1, (*yy_texture_coord)[(yyvsp[(4) - (7)].entero)-1] );
     yyTextureCoordinate2->point.set1Value((yyvsp[(5) - (7)].entero)-1, (*yy_texture_coord)[(yyvsp[(7) - (7)].entero)-1] );

     //Miramos si hay más vertices en esta faceta

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;

     //Leemos hasta el fin de linea
     while (yylex() == _ENTERO)
     {
        //Salvamos el indice del vértice
        int idx = yylval.entero-1;
        yyIndexedFaceSet->coordIndex.set1Value(k++, idx);

        //Ignoramos la barra
        yylex();

        //Leemos la coordenada de textura
        int idt = LeeEntero() - 1;
        yyTextureCoordinate2->point.set1Value(idx, (*yy_texture_coord)[idt]);

     }// while (yylex() == _ENTERO)

     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;

     //Cerramos la faceta actual
     yyIndexedFaceSet->coordIndex.set1Value(k++, -1);
     yyNumeroFacetas++;
  }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 523 "src/cds_parser.y"
    {
     /* generamos una nueva faceta, ignorando resto de informacion */
     int k = yyIndexedFaceSet->coordIndex.getNum();

     //Por ahora hemos leido 2 valores
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(2) - (11)].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[(7) - (11)].entero) -1);

     //Salvamos las coordenadas de normal
     yyIndexedFaceSet->normalIndex.set1Value(k-2, (yyvsp[(6) - (11)].entero) -1);
     yyIndexedFaceSet->normalIndex.set1Value(k-1, (yyvsp[(11) - (11)].entero)-1);

     //Salvamos las coordenadas de textura
     yyTextureCoordinate2->point.set1Value((yyvsp[(2) - (11)].entero)-1, (*yy_texture_coord)[(yyvsp[(4) - (11)].entero)-1] );
     yyTextureCoordinate2->point.set1Value((yyvsp[(7) - (11)].entero)-1, (*yy_texture_coord)[(yyvsp[(9) - (11)].entero)-1] );

     //Miramos si hay más vertices en esta faceta

     //Indicamos al scanner que queremos ver los saltos de linea
     yy_ver_LF = 1;

     //Leemos hasta el fin de linea
     while (yylex() == _ENTERO)
     {
        //Salvamos el indice del vértice
        int idx = yylval.entero-1;
        yyIndexedFaceSet->coordIndex.set1Value(k++, idx);

        //Ignoramos el campo siguiente (/)
        yylex();

        //Leemos la coordenada de textura
        int idt = LeeEntero() - 1;
        yyTextureCoordinate2->point.set1Value(idx, (*yy_texture_coord)[idt]);

        //Ignoramos el campo siguiente (/)
        yylex();

        //Leemos la coordenada de normal (vn)
        int idn = LeeEntero() - 1;
        yyIndexedFaceSet->normalIndex.set1Value(k-1, idn);

     }//while (yylex() == _ENTERO)

     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;

     //Cerramos la faceta actual
     yyIndexedFaceSet->coordIndex.set1Value(k++, -1);
     yyIndexedFaceSet->normalIndex.set1Value(k-1, -1);
     yyNumeroFacetas++;
  }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 577 "src/cds_parser.y"
    {
      int idx = yyMaterial->diffuseColor.getNum();
      yyMaterial->diffuseColor.set1Value(idx,(yyvsp[(2) - (4)].real), (yyvsp[(3) - (4)].real), (yyvsp[(4) - (4)].real));
  }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 583 "src/cds_parser.y"
    {
     yyMaterialBinding->value=SoMaterialBinding::PER_VERTEX;
     yyMaterialBindingUsed = true;
  }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 589 "src/cds_parser.y"
    {
     yyMaterialBinding->value=SoMaterialBinding::PER_FACE;
     yyMaterialBindingUsed = true;
  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 595 "src/cds_parser.y"
    {
     /* Almacenamos la informacion de textura */
      int idx = yy_texture_coord->getNum();
      yy_texture_coord->set1Value(idx,(yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real));
  }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 602 "src/cds_parser.y"
    {
     /* Almacenamos la informacion de textura */
      int idx = yy_texture_coord->getNum();
      yy_texture_coord->set1Value(idx,(yyvsp[(3) - (4)].real), (yyvsp[(4) - (4)].real));
  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 609 "src/cds_parser.y"
    {
     /* Almacenamos la informacion de textura */
      int idx = yy_texture_coord->getNum();

      //Impedimos una hipotetica division por cero
      if ((yyvsp[(5) - (5)].real) != 0.0f)
         yy_texture_coord->set1Value(idx,(yyvsp[(3) - (5)].real)/(yyvsp[(5) - (5)].real), (yyvsp[(4) - (5)].real)/(yyvsp[(5) - (5)].real));
      else
         yy_texture_coord->set1Value(idx, 0, 0);
  }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 621 "src/cds_parser.y"
    {
     /* Almacenamos la informacion de normal */
      int idx = yyNormal->vector.getNum();
      yyNormal->vector.set1Value(idx,(yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].real), (yyvsp[(5) - (5)].real));
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 628 "src/cds_parser.y"
    {
     /* Ignoramos la informacion */
  }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 633 "src/cds_parser.y"
    {
     //Filename of a texture
     int tipo = yylex();
     if (tipo == _CADENA)
     {
        //Eliminamos las comillas del final
        yylval.pchar[strlen(yylval.pchar)-1] = 0;
        //Creamos un nodo Texture2
        SoTexture2 *yyTexture2 = new SoTexture2;
        yyGeometry->insertChild(yyTexture2,1);
        //Metemos el nombre del fichero, sin las comillas iniciales
        yyTexture2->filename.setValue(yylval.pchar+1);
     }
     else
     {
        yyerror("Expected a file name enclosed with \"\".\n");
        return -1;
     }
  }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 654 "src/cds_parser.y"
    {
    ignora_resto_linea();
  }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 659 "src/cds_parser.y"
    {
    ignora_resto_linea();
  }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 663 "src/cds_parser.y"
    {
    ignora_resto_linea();
  }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 667 "src/cds_parser.y"
    {
    ignora_resto_linea();
  }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 671 "src/cds_parser.y"
    {
    ignora_resto_linea();
  }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 675 "src/cds_parser.y"
    {
    //En ocasiones hay comentarios marcados con $
    ignora_resto_linea();
  }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 686 "src/cds_parser.y"
    {
     /* Almacenamos el punto. */
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (yyvsp[(3) - (4)].real));
  }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 694 "src/cds_parser.y"
    {
    int i;

    //Leemos el depth y branch
    yy_sph_depth = (yyvsp[(1) - (2)].entero);
    yy_sph_branch = (yyvsp[(2) - (2)].entero);

    //Introducimos el arbol de esferas en un blinker 
     yyGeometry = new SoSeparator();
     yyBlinker = new SoBlinker();
     yyBlinker->speed = 0.3f;
     yyGeometry->addChild(yyBlinker);

    //Colgamos un separator por cada nivel
    for (i=0; i < yy_sph_depth; i++)
    {
       char buf[16];
       SoSeparator *sep = new SoSeparator();
       yyBlinker->addChild (sep);
       //Le damos un nombre al nivel
       sprintf(buf, "L%d", i);
       sep->setName(buf);
    }

    //Nivel que vamos a leer
    yy_sph_l      = 0;
    yy_sph_l_sep  = (SoSeparator *)yyBlinker->getChild(0);

    //Numero de esferas en el nivel
    yy_sph_num    = 1;

  }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 727 "src/cds_parser.y"
    {
  }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 736 "src/cds_parser.y"
    {
    int i;
    //fprintf(stderr, "l=%d quedan=%d radio=%g\n",yy_sph_l,yy_sph_num,$4);

    //Añadimos la esfera al nivel actual, con una traslacion a su sitio
    SoSeparator *sep = new SoSeparator ();
    yy_sph_l_sep->addChild (sep);

    SoTranslation *trl = new SoTranslation();
    trl->translation.setValue ((yyvsp[(1) - (5)].real), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real));
    sep->addChild(trl);

    SoSphere *sph = new SoSphere();
    sph->radius = (yyvsp[(4) - (5)].real);
    sep->addChild (sph);

    //decrementamos el numero de esferas restantes por leer del nivel
    yy_sph_num--;

    //Comprobamos si se ha llenado este nivel
    if (yy_sph_num == 0)
    {
       //Aumentamos el nivel que vamos a leer
       yy_sph_l++;

       //Comprobamos el numero de niveles leidos y cambiamos al separador 
       //del nivel actual, o bien terminamos la lectura de fichero
       if (yy_sph_l < yyBlinker->getNumChildren())
          yy_sph_l_sep  = (SoSeparator *)yyBlinker->getChild(yy_sph_l);
       else
       {
          //Hemos leido todas las esferas de todos los niveles
          return 0;
       }

       //Calculamos el numero de esferas restantes
       yy_sph_num = 1;
       for (i=0; i<yy_sph_l; i++)
           yy_sph_num *= yy_sph_branch;

    }// if (yy_sph_num == 0)

  }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 783 "src/cds_parser.y"
    {
     /* Preparamos para leer STL */
     yyGeometry = new SoSeparator();
     yyCoordinate3 = new SoCoordinate3();
     yyFaceSet = new SoFaceSet();
     //yyNormal = new SoNormal();

     yyGeometry->addChild(yyCoordinate3);
     //yyGeometry->addChild(yyNormal);
     yyGeometry->addChild(yyFaceSet);

     yyNumeroFacetas = 0;
     yyNumeroPuntos = 0;
     yylinenum = 1;
     yy_loopsize=0;
  }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 808 "src/cds_parser.y"
    {yy_outerloop=true;}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 810 "src/cds_parser.y"
    {
       yyFaceSet->numVertices.set1Value(yyNumeroFacetas++, yy_loopsize);
       yy_loopsize=0;
       yy_outerloop=false;
    }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 822 "src/cds_parser.y"
    {
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[(2) - (4)].real), (yyvsp[(3) - (4)].real), (yyvsp[(4) - (4)].real));
     yy_loopsize++;
}
    break;



/* Line 1806 of yacc.c  */
#line 2483 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 828 "src/cds_parser.y"


void yyerror(const char *s)
{
  fprintf(stderr, "\nLinea %u: %s\n", yylinenum, s);
  /* No hay piedad con los errores */
  //exit(-1);
}

void yyerror(char *s)
{
  fprintf(stderr, "\nLinea %u: %s\n", yylinenum, s);
  /* No hay piedad con los errores */
  //exit(-1);
}

/* Funcion que lee del fichero hasta un salto de linea */
void ignora_resto_linea()
{
   //Indicamos al scanner que queremos ver los saltos de linea
   yy_ver_LF = 1;

   //Leemos hasta el fin de linea
   while (yylex() != _LF) {}

   //Indicamos al scanner que no queremos ver los saltos de linea
   yy_ver_LF = 0;
}

/* Funcion que lee un numero del fichero, independientemente de si
   es real o entero */
float LeeReal ()
{
   int tipo;
   tipo = yylex();
   if (tipo == _REAL)
     return yylval.real;
   else if (tipo == _ENTERO)
     return (float)yylval.entero;
   else
   {
     fprintf(stderr, "\nLine %u: Format error in real number.\n", yylinenum);
     exit (-1);
   }
}

/* Funcion que lee un numero del fichero, obligatoriamente entero */
int LeeEntero ()
{
   int tipo;
   tipo = yylex();
   if (tipo == _ENTERO)
     return yylval.entero;
   else
   {
     fprintf(stderr, "\nLine %u: Format error in integer number.\n", yylinenum);
     exit (-1);
   }
}


/* Función que trata un bloque OFF/COFF/NOFF/NCOFF/STOFF ignorando la
   información de color y normal. El tercer argumento indica
   cuantos valores deben ignorarse despues de leer cada punto 3D */
void LeeBloqueOFF (int nPuntos, int nCaras, int tipoBloqueOFF)
{
   int nVertCara, i,j;
   float x, y, z;
   float r, g, b, a;
   float nx, ny, nz;
   float tx, ty;

   /* Reservamos espacio para las coordenadas de los vértices */
   SoCoordinate3 *coordinate3 = new SoCoordinate3();
   yyGeometry->addChild(coordinate3);

   /* Si hay información de color, creamos un material */
   if (tipoBloqueOFF == _COFF || tipoBloqueOFF == _NCOFF )
   {
     yyMaterialBinding=new SoMaterialBinding();
     yyMaterialBinding->value=SoMaterialBinding::PER_VERTEX_INDEXED;
     yyGeometry->addChild(yyMaterialBinding);

     yyMaterial=new SoMaterial();
     yyGeometry->addChild(yyMaterial);
   }

   /* Si hay información de normales, creamos un SoNormal */
   if (tipoBloqueOFF == _NOFF || tipoBloqueOFF == _NCOFF )
   {
     yyNormal=new SoNormal();
     yyGeometry->addChild(yyNormal);
   }

   /* Si hay información de textura, creamos un SoTextureCoordinate2 */
   if (tipoBloqueOFF == _STOFF)
   {
     yyTextureCoordinate2 = new SoTextureCoordinate2;
     yyGeometry->addChild(yyTextureCoordinate2);
   }

   /* Reservamos espacio para las facetas de los vértices */
   SoIndexedPointSet *yyIndexedPointSet = new SoIndexedPointSet();
   yyGeometry->addChild(yyIndexedPointSet);
   SoIndexedLineSet *yyIndexedLineSet = new SoIndexedLineSet();
   yyGeometry->addChild(yyIndexedLineSet);
   SoIndexedFaceSet *yyIndexedFaceSet = new SoIndexedFaceSet();
   yyGeometry->addChild(yyIndexedFaceSet);

   /* Lectura de la informacion de los puntos */
   for (i=0; i<nPuntos; i++)
   {
     /* Leemos x,y,z mediante yylex() */
     x = LeeReal();
     y = LeeReal();
     z = LeeReal();

     /* Almacenamos el punto. */
     coordinate3->point.set1Value(i,x,y,z);

     /* Si hay información de normales, leemos la información */
     if (tipoBloqueOFF == _NOFF || tipoBloqueOFF == _NCOFF )
     {

       /* Leemos nx,ny,nz mediante yylex() */
       nx = LeeReal();
       ny = LeeReal();
       nz = LeeReal();

       /* Almacenamos la normal. */
       yyNormal->vector.set1Value(i, nx, ny, nz);

     }//if normal

     /* Si hay información de color, leemos la información */
     if (tipoBloqueOFF == _COFF || tipoBloqueOFF == _NCOFF )
     {
       r = LeeReal();
       g = LeeReal();
       b = LeeReal();
       a = LeeReal();

       /* Almacenamos el color. */
       yyMaterial->diffuseColor.set1Value(i,r,g,b);

       /* Almacenamos la transparencia */
       yyMaterial->transparency.set1Value(i, 1.0 - a);

     }//if color

     /* Si hay información de textura, leemos la información */
     if (tipoBloqueOFF == _STOFF)
     {
       /* Leemos nx,ny,nz mediante yylex() */
       tx = LeeReal();
       ty = LeeReal();

       /* Almacenamos la normal. */
       yyTextureCoordinate2->point.set1Value(i, tx, ty);

     }//if textura

   } /* for */

   /* Aumentamos la cuenta de vertices */
   yyNumeroPuntos += nPuntos;


   /* Lectura de la informacion de las facetas */
   int k,v;
   k=0;
   int np=0;
   int nl=0;

   for (i=0; i<nCaras; i++)
   {
     /* Leemos el numero de vertices de esta faceta */
     nVertCara = LeeEntero();

     /* Ignoramos facetas de menos de 3 vértices */
     if (nVertCara <= 0)
     {
       fprintf(stderr, "\nLine %u: Size of face cannot be %d\n", yylinenum, nVertCara);
       /* Continuamos con la siguiente faceta */
       continue;
     }

     if (nVertCara == 1)
     {
       /* Leemos el indices y creamos un punto visible */
       v = LeeEntero();
       yyIndexedPointSet->coordIndex.set1Value(np++, v);
       continue;
     }

     if (nVertCara == 2)
     {
       /* Leemos dos indices y creamos una arista */
       v = LeeEntero();
       yyIndexedLineSet->coordIndex.set1Value(nl++, v);
       v = LeeEntero();
       yyIndexedLineSet->coordIndex.set1Value(nl++, v);
       yyIndexedLineSet->coordIndex.set1Value(nl++, -1);

       /* Continuamos con la siguiente faceta */
       continue;
     }

     for (j=0; j<nVertCara; j++)
     {
       /* Leemos el índice del vértice */
       v = LeeEntero();

       /* Almacenamos la coordenada. */
       yyIndexedFaceSet->coordIndex.set1Value(k++, v);

     } /* for */

     /* Almacenamos la marca de fin de faceta. */
     yyIndexedFaceSet->coordIndex.set1Value(k++, -1);

     //Si hay información de color por faceta, la ignoramos
     ignora_resto_linea();

     /* Aumentamos la cuenta de facetas */
     yyNumeroFacetas++;

   } /* for */

   /* Elimina objetos no utilizados */
   if (np <=0)
      yyGeometry->removeChild(yyIndexedPointSet);
   if (nl <=0)
      yyGeometry->removeChild(yyIndexedLineSet);
   if (k <=0)
      yyGeometry->removeChild(yyIndexedFaceSet);


} /* LeeBloqueOFF (nPuntos, nCaras, tipoBloqueOFF) */


