/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
