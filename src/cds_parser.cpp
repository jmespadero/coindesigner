/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/cds_parser.y" /* yacc.c:339  */

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
     -XYZ : Nubes de puntos (3 coordenadas por linea de fichero)
     -SPH : Arboles de esferas
*/

#define YYERROR_VERBOSE
#define YYSTYPE_IS_DECLARED 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "cds_globals.h"
#include <string>
#include <iostream>

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
SoBlinker *yyBlinker;

/* numero de puntos y de facetas */
unsigned int yyNumeroFacetas;
unsigned int yyNumeroPuntos;
unsigned int yyNumeroColors;

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

/* Funcion que lee una palabra del fichero hasta un salto de linea */
std::string LeeString();

/* Funcion que lee un numero del fichero, sea entero o real */
float LeeReal ();

/* Funcion que lee un numero del fichero, obligatoriamente entero. */
int LeeEntero ();

/* Función que trata un bloque OFF/COFF/NOFF/NCOFF/STOFF */
void LeeBloqueOFF (int nPuntos, int nCaras, int tipoBloqueOFF);

/* Variable que indica al scanner si debe mostrar los saltos de linea */
extern int yy_ver_LF;

#line 182 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 290 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    46,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
       2,     2,    38,    43,     2,     2,     2,     2,    37,     2,
      42,    44,    36,     2,    41,    45,    40,     2,    34,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   133,   133,   133,   145,   145,   168,   168,   239,   242,
     246,   247,   250,   251,   252,   253,   254,   255,   256,   257,
     260,   261,   264,   295,   302,   309,   316,   323,   330,   331,
     332,   335,   341,   347,   357,   362,   367,   374,   403,   437,
     475,   516,   558,   612,   619,   631,   639,   646,   651,   657,
     678,   682,   686,   690,   694,   701,   702,   705,   714,   713,
     751,   752,   755,   803,   803,   820,   821,   824,   825,   828,
     828,   829,   837,   838,   841
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_OFF", "_COFF", "_NOFF", "_NCOFF",
  "_STOFF", "_LIST", "_APPEARANCE", "_FILE", "_LF", "_MTLLIB", "_USEMTL",
  "_BEGIN", "_END", "_BIND", "_FACE", "_TEX", "_SOLID", "_ASCII", "_FACET",
  "_NORMAL", "_OUTER", "_LOOP", "_VERTEX", "_ENDLOOP", "_ENDFACET",
  "_ENDSOLID", "_ENTERO", "_REAL", "_CADENA", "'{'", "'}'", "'v'", "'c'",
  "'p'", "'l'", "'f'", "'/'", "'t'", "'r'", "'n'", "'g'", "'o'", "'s'",
  "'$'", "$accept", "fich_geom", "$@1", "$@2", "$@3", "REAL",
  "bloque_oogl", "_bloques_oogl", "bloque_appearance", "bloque_off",
  "bloque_coff", "bloque_noff", "bloque_ncoff", "bloque_stoff",
  "bloque_SMF", "linea_SMF", "bloque_XYZ", "linea_XYZ", "fichero_SPH",
  "$@4", "bloque_SPH", "linea_SPH", "fichero_STL", "$@5", "bloque_STL",
  "facet_STL", "loop_STL", "$@6", "bloque_loop_STL", "vertex_STL", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   123,   125,   118,    99,   112,   108,   102,    47,
     116,   114,   110,   103,   111,   115,    36
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -64

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,     0,    41,    49,   -10,    98,  -121,  -121,    24,  -121,
    -121,    21,    37,    43,    46,    51,    49,    53,    49,  -121,
      49,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   -10,   -10,
    -121,  -121,  -121,    98,    59,  -121,    57,   -10,    67,    74,
      76,   -10,  -121,  -121,  -121,  -121,    33,  -121,    86,   -10,
      78,    88,    89,    90,    91,    49,  -121,  -121,    55,  -121,
     -10,  -121,   113,    17,   -10,   -10,   -10,   -10,   -10,  -121,
      92,   -17,   -10,  -121,   101,   -10,   -10,  -121,    94,   108,
     109,   111,   116,  -121,  -121,   119,  -121,  -121,  -121,   -10,
     -10,   -10,   -10,   -10,  -121,   117,   -15,  -121,    68,    -5,
    -121,   -10,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
     -10,   -10,   -10,  -121,  -121,   -14,   123,   -10,  -121,   102,
     126,  -121,  -121,   -10,  -121,  -121,   -10,   121,   132,   133,
     -10,    36,   -10,    75,  -121,  -121,   -10,   -10,   134,   135,
     127,   -10,  -121,   -10,  -121,  -121,  -121,  -121,  -121,   128,
     129,    36,   -10,   136,   140,   143,  -121,   137,  -121,  -121,
     142,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     0,     0,     0,     8,     9,     0,    58,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,    12,    13,    14,    15,    16,    11,    10,     0,     5,
      56,    52,    53,     0,     0,    49,     0,     0,     0,     0,
       0,     0,    48,    50,    51,    54,     7,    29,     0,     0,
       0,     0,     0,     0,     0,    21,    18,    22,     0,    17,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    28,     0,     0,    59,    61,     0,     0,
       0,     0,     0,    20,    19,     0,    30,    35,    34,     0,
       0,     0,     0,     0,    38,     0,     0,    45,     0,     0,
      66,     0,    60,    23,    24,    25,    26,    27,    57,    47,
      43,     0,    31,    36,    39,     0,     0,     0,    69,     0,
       0,    64,    65,     0,    44,    46,    32,     0,     0,     0,
       0,     0,     0,     0,    73,    67,     0,     0,     0,     0,
       0,     0,    70,     0,    71,    72,    62,    33,    41,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    40,    68,
       0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,  -121,  -121,   -28,    15,   100,  -121,  -121,
    -121,  -121,  -121,  -121,   139,   -36,  -121,   144,  -121,  -121,
    -121,    99,  -121,  -121,  -121,    79,  -120,  -121,  -121,    44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    28,    55,    56,    20,    21,
      22,    23,    24,    25,    46,    47,    29,    30,     6,    49,
      76,    77,     7,     8,    99,   100,   120,   131,   133,   134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    67,    68,
      73,   142,    95,    72,   115,   127,    98,   -63,    19,    26,
      27,    75,    96,   121,   116,   128,    73,     1,    -4,     9,
      -2,   155,    85,    58,    87,    59,    89,    90,    91,    92,
      93,    10,    88,    48,    97,    31,    32,   101,    75,    34,
      50,    35,    11,    12,    13,    14,    15,    16,    17,   118,
     119,   109,   110,   111,   112,   113,    51,    36,    37,    38,
      39,    40,    52,   123,    41,    53,    42,    43,    44,    45,
      54,    18,   124,   125,   126,    57,    26,    27,    84,   130,
     117,   118,   119,    64,    63,   136,    69,    65,   137,    66,
     132,   144,   141,    70,   143,    71,    74,    78,   146,   147,
      31,    32,    33,   151,    34,   152,    35,    79,    80,    81,
      82,    94,    98,   103,   156,    31,    32,   132,    86,    34,
     108,    35,    36,    37,    38,    39,    40,   104,   105,    41,
     106,    42,    43,    44,    45,   107,   114,    36,    37,    38,
      39,    40,   129,   135,    41,    83,    42,    43,    44,    45,
     138,   139,   140,   148,   149,   157,   150,   153,   154,   158,
     159,   161,    62,    61,     0,   102,   160,   145,   122
};

static const yytype_int16 yycheck[] =
{
      28,     3,     4,     5,     6,     7,     8,     9,    36,    37,
      46,   131,    29,    41,    29,    29,    21,    19,     3,    29,
      30,    49,    39,    28,    39,    39,    62,    29,    30,    29,
      32,   151,    60,    18,    17,    20,    64,    65,    66,    67,
      68,     0,    25,    19,    72,    12,    13,    75,    76,    16,
      29,    18,     3,     4,     5,     6,     7,     8,     9,    23,
      24,    89,    90,    91,    92,    93,    29,    34,    35,    36,
      37,    38,    29,   101,    41,    29,    43,    44,    45,    46,
      29,    32,   110,   111,   112,    32,    29,    30,    33,   117,
      22,    23,    24,    36,    35,   123,    29,    40,   126,    42,
      25,    26,   130,    29,   132,    29,    20,    29,   136,   137,
      12,    13,    14,   141,    16,   143,    18,    29,    29,    29,
      29,    29,    21,    29,   152,    12,    13,    25,    15,    16,
      11,    18,    34,    35,    36,    37,    38,    29,    29,    41,
      29,    43,    44,    45,    46,    29,    29,    34,    35,    36,
      37,    38,    29,    27,    41,    55,    43,    44,    45,    46,
      39,    29,    29,    29,    29,    29,    39,    39,    39,    29,
      27,    29,    33,    29,    -1,    76,    39,   133,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    48,    49,    50,    51,    65,    69,    70,    29,
       0,     3,     4,     5,     6,     7,     8,     9,    32,    53,
      55,    56,    57,    58,    59,    60,    29,    30,    52,    63,
      64,    12,    13,    14,    16,    18,    34,    35,    36,    37,
      38,    41,    43,    44,    45,    46,    61,    62,    19,    66,
      29,    29,    29,    29,    29,    53,    54,    32,    53,    53,
      52,    64,    61,    35,    36,    40,    42,    52,    52,    29,
      29,    29,    52,    62,    20,    52,    67,    68,    29,    29,
      29,    29,    29,    54,    33,    52,    15,    17,    25,    52,
      52,    52,    52,    52,    29,    29,    39,    52,    21,    71,
      72,    52,    68,    29,    29,    29,    29,    29,    11,    52,
      52,    52,    52,    52,    29,    29,    39,    22,    23,    24,
      73,    28,    72,    52,    52,    52,    52,    29,    39,    29,
      52,    74,    25,    75,    76,    27,    52,    52,    39,    29,
      29,    52,    73,    52,    26,    76,    52,    52,    29,    29,
      39,    52,    52,    39,    39,    73,    52,    29,    29,    27,
      39,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    48,    50,    48,    51,    48,    48,    48,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    56,    57,    58,    59,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    66,    65,
      67,    67,    68,    70,    69,    71,    71,    72,    72,    74,
      73,    73,    75,    75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     1,     2,     4,     4,     4,     4,     4,     2,     1,
       3,     4,     5,     7,     3,     3,     4,     2,     3,     4,
       9,     7,    11,     4,     5,     3,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     0,     4,
       2,     1,     5,     0,     5,     2,     1,     3,     7,     0,
       3,     3,     2,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 133 "src/cds_parser.y" /* yacc.c:1646  */
    {
    /* Preparamos para leer OOGL */
    yyGeometry = new SoSeparator();
    yyNumeroFacetas = 0;
    yyNumeroPuntos = 0;
    yylinenum = 1;
  }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 141 "src/cds_parser.y" /* yacc.c:1646  */
    {
  }
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 145 "src/cds_parser.y" /* yacc.c:1646  */
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
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "src/cds_parser.y" /* yacc.c:1646  */
    {
     //Indicamos al scanner que no queremos ver los saltos de linea
     yy_ver_LF = 0;
  }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 168 "src/cds_parser.y" /* yacc.c:1646  */
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
     yyMaterialBinding->value=SoMaterialBinding::PER_VERTEX_INDEXED;
     yyMaterial=new SoMaterial();

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
     yyNumeroColors = 0;
     yylinenum = 1;
  }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 204 "src/cds_parser.y" /* yacc.c:1646  */
    {
     //Si el fichero no contenia coordenadas de textura, lo eliminamos
     if (yy_texture_coord->getNum() < 1)
     {
       yyGeometry->removeChild(yyTextureCoordinate2);
     }

     //Si el fichero no contenia coordenadas de normal, lo eliminamos
     if (yyNormal->vector.getNum() < 1)
       yyGeometry->removeChild(yyNormal);

     //Si el fichero no contenia puntos, lo eliminamos
     if (yyIndexedPointSet->coordIndex.getNum() < 1)
       yyGeometry->removeChild(yyIndexedPointSet);

     //Si el fichero no contenia lineas, lo eliminamos
     if (yyIndexedLineSet->coordIndex.getNum() < 1)
       yyGeometry->removeChild(yyIndexedLineSet);

     //Si el fichero no contenia facetas, lo eliminamos
     if (yyIndexedFaceSet->coordIndex.getNum() < 1)
       yyGeometry->removeChild(yyIndexedFaceSet);

     //Si el fichero no contenia colores por vertex, lo eliminamos
     if (yyMaterial->diffuseColor.getNum() < 1)
     {
       yyGeometry->removeChild(yyMaterial);
       yyGeometry->removeChild(yyMaterialBinding);
     }

     //Liberamos espacio de información de textura
     delete yy_texture_coord;
  }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 246 "src/cds_parser.y" /* yacc.c:1646  */
    {(yyval.real) = (yyvsp[0].real); }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 247 "src/cds_parser.y" /* yacc.c:1646  */
    {(yyval.real) = (yyvsp[0].entero);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 265 "src/cds_parser.y" /* yacc.c:1646  */
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
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 296 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[-2].entero), (yyvsp[-1].entero), _OFF);
  }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 303 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[-2].entero), (yyvsp[-1].entero), _COFF);
  }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 310 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[-2].entero), (yyvsp[-1].entero), _NOFF);
  }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 317 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[-2].entero), (yyvsp[-1].entero), _NCOFF);
  }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 324 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* leemos este bloque, indicando el tipo adecuado */
     LeeBloqueOFF ((yyvsp[-2].entero), (yyvsp[-1].entero), _STOFF);
  }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 336 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // Almacenamos las coordenadas cartesianas.
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[-2].real), (yyvsp[-1].real), (yyvsp[0].real));
  }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 342 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // Almacenamos las coordenadas racionales.
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[-3].real)/(yyvsp[0].real), (yyvsp[-2].real)/(yyvsp[0].real), (yyvsp[-1].real)/(yyvsp[0].real));
  }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 348 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // Almacenamos las coordenadas 
     yyCoordinate3->point.set1Value(yyNumeroPuntos, (yyvsp[-5].real), (yyvsp[-4].real), (yyvsp[-3].real));
     // Almacenamos el color RGB
     yyMaterial->diffuseColor.set1Value(yyNumeroPuntos, (yyvsp[-2].real), (yyvsp[-1].real), (yyvsp[0].real));
     //yyMaterial->transparency.set1Value(yyNumeroPuntos, 0);
     yyNumeroPuntos++;
  }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 358 "src/cds_parser.y" /* yacc.c:1646  */
    {
     yyMaterialBinding->value=SoMaterialBinding::PER_VERTEX_INDEXED;  
  }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 363 "src/cds_parser.y" /* yacc.c:1646  */
    {
     yyMaterialBinding->value=SoMaterialBinding::PER_FACE_INDEXED;  
  }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 368 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // Almacenamos el color RGB
     yyMaterial->diffuseColor.set1Value(yyNumeroColors, (yyvsp[-2].real), (yyvsp[-1].real), (yyvsp[0].real));
     yyNumeroColors++;
  }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 375 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // generamos un nuevo punto
     int k = yyIndexedPointSet->coordIndex.getNum();
     yyIndexedPointSet->coordIndex.set1Value(k++, (yyvsp[0].entero) -1);

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
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 404 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // generamos una nueva polilinea de 2 o mas vertices

     int k = yyIndexedLineSet->coordIndex.getNum();
     yyIndexedLineSet->coordIndex.set1Value(k++, (yyvsp[-1].entero) -1);
     yyIndexedLineSet->coordIndex.set1Value(k++, (yyvsp[0].entero) -1);

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
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 438 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // generamos una nueva faceta de 3 o mas vertices

     int k = yyIndexedFaceSet->coordIndex.getNum();
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-2].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-1].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[0].entero) -1);

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
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 476 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* generamos una nueva faceta, ignorando resto de informacion */
     int k = yyIndexedFaceSet->coordIndex.getNum();

     //Por ahora hemos leido 2 valores
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-7].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-3].entero) -1);

     //Salvamos las coordenadas de normal
     yyIndexedFaceSet->normalIndex.set1Value(k-2, (yyvsp[-4].entero) -1);
     yyIndexedFaceSet->normalIndex.set1Value(k-1, (yyvsp[0].entero) -1);

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
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 517 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* generamos una nueva faceta, ignorando resto de informacion */
     int k = yyIndexedFaceSet->coordIndex.getNum();

     //Por ahora hemos leido 2 valores
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-5].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-2].entero) -1);

     //Salvamos las coordenadas de textura
     yyTextureCoordinate2->point.set1Value((yyvsp[-5].entero)-1, (*yy_texture_coord)[(yyvsp[-3].entero)-1] );
     yyTextureCoordinate2->point.set1Value((yyvsp[-2].entero)-1, (*yy_texture_coord)[(yyvsp[0].entero)-1] );

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
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 559 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* generamos una nueva faceta, ignorando resto de informacion */
     int k = yyIndexedFaceSet->coordIndex.getNum();

     //Por ahora hemos leido 2 valores
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-9].entero) -1);
     yyIndexedFaceSet->coordIndex.set1Value(k++, (yyvsp[-4].entero) -1);

     //Salvamos las coordenadas de normal
     yyIndexedFaceSet->normalIndex.set1Value(k-2, (yyvsp[-5].entero) -1);
     yyIndexedFaceSet->normalIndex.set1Value(k-1, (yyvsp[0].entero)-1);

     //Salvamos las coordenadas de textura
     yyTextureCoordinate2->point.set1Value((yyvsp[-9].entero)-1, (*yy_texture_coord)[(yyvsp[-7].entero)-1] );
     yyTextureCoordinate2->point.set1Value((yyvsp[-4].entero)-1, (*yy_texture_coord)[(yyvsp[-2].entero)-1] );

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
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 613 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* Almacenamos la informacion de textura */
      int idx = yy_texture_coord->getNum();
      yy_texture_coord->set1Value(idx,(yyvsp[-1].real), (yyvsp[0].real));
  }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 620 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* Almacenamos la informacion de textura */
      int idx = yy_texture_coord->getNum();

      //Impedimos una hipotetica division por cero
      if ((yyvsp[0].real) != 0.0f)
         yy_texture_coord->set1Value(idx,(yyvsp[-2].real)/(yyvsp[0].real), (yyvsp[-1].real)/(yyvsp[0].real));
      else
         yy_texture_coord->set1Value(idx, 0, 0);
  }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 632 "src/cds_parser.y" /* yacc.c:1646  */
    {
     // el equivalente a vt pero en fichero SMF
      int idx = yy_texture_coord->getNum();
      yy_texture_coord->set1Value(idx,(yyvsp[-1].real), (yyvsp[0].real));
  }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 640 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* Almacenamos la informacion de normal */
      int idx = yyNormal->vector.getNum();
      yyNormal->vector.set1Value(idx,(yyvsp[-2].real), (yyvsp[-1].real), (yyvsp[0].real));
  }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 647 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* Ignoramos la informacion */
  }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 652 "src/cds_parser.y" /* yacc.c:1646  */
    {
    std::string groupStr = LeeString();
    std::cout << "group name: " << groupStr << std::endl;
  }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 658 "src/cds_parser.y" /* yacc.c:1646  */
    {
    std::string textureName = LeeString();
    std::cout << "texture name: " << textureName << std::endl;

    //Creamos un nodo Texture2
    SoTexture2 *yyTexture2 = new SoTexture2;    
    yyGeometry->insertChild(yyTexture2, 2);
    
    if (textureName[0] == '"' )
    {
        std::string st = textureName.substr(1, textureName.size()-2);
        textureName = st;
        std::cout << "texture name: " << textureName << std::endl;
    }

    //Metemos el nombre del fichero, sin las comillas iniciales
    yyTexture2->filename.setValue(textureName.c_str());
  }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 679 "src/cds_parser.y" /* yacc.c:1646  */
    {
    ignora_resto_linea();
  }
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 683 "src/cds_parser.y" /* yacc.c:1646  */
    {
    ignora_resto_linea();
  }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 687 "src/cds_parser.y" /* yacc.c:1646  */
    {
    ignora_resto_linea();
  }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 691 "src/cds_parser.y" /* yacc.c:1646  */
    {
    ignora_resto_linea();
  }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 695 "src/cds_parser.y" /* yacc.c:1646  */
    {
    //En ocasiones hay comentarios marcados con $
    ignora_resto_linea();
  }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 706 "src/cds_parser.y" /* yacc.c:1646  */
    {
     /* Almacenamos el punto. */
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[-3].real), (yyvsp[-2].real), (yyvsp[-1].real));
  }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 714 "src/cds_parser.y" /* yacc.c:1646  */
    {
    int i;

    //Leemos el depth y branch
    yy_sph_depth = (yyvsp[-1].entero);
    yy_sph_branch = (yyvsp[0].entero);

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
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 747 "src/cds_parser.y" /* yacc.c:1646  */
    {
  }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 756 "src/cds_parser.y" /* yacc.c:1646  */
    {
    int i;
    //fprintf(stderr, "l=%d quedan=%d radio=%g\n",yy_sph_l,yy_sph_num,$4);

    //Añadimos la esfera al nivel actual, con una traslacion a su sitio
    SoSeparator *sep = new SoSeparator ();
    yy_sph_l_sep->addChild (sep);

    SoTranslation *trl = new SoTranslation();
    trl->translation.setValue ((yyvsp[-4].real), (yyvsp[-3].real), (yyvsp[-2].real));
    sep->addChild(trl);

    SoSphere *sph = new SoSphere();
    sph->radius = (yyvsp[-1].real);
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
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 803 "src/cds_parser.y" /* yacc.c:1646  */
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
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 828 "src/cds_parser.y" /* yacc.c:1646  */
    {yy_outerloop=true;}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 830 "src/cds_parser.y" /* yacc.c:1646  */
    {
       yyFaceSet->numVertices.set1Value(yyNumeroFacetas++, yy_loopsize);
       yy_loopsize=0;
       yy_outerloop=false;
    }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 842 "src/cds_parser.y" /* yacc.c:1646  */
    {
     yyCoordinate3->point.set1Value(yyNumeroPuntos++, (yyvsp[-2].real), (yyvsp[-1].real), (yyvsp[0].real));
     yy_loopsize++;
}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2280 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 848 "src/cds_parser.y" /* yacc.c:1906  */


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

/* Funcion que lee del fichero hasta un salto de linea */
std::string LeeString()
{
    extern char *yytext;
    std::string str;

    //Indicamos al scanner que queremos ver los saltos de linea
    int old_yy_ver_LF = yy_ver_LF;
    yy_ver_LF = 1;

    //Leemos hasta el fin de linea
    while (true)
    {
       int token = yylex();

       //printf("%s\n", yytext);

       if (token == _LF)
           break;

       str += yytext;
    }
    
    yy_ver_LF = old_yy_ver_LF;

    return str;
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
