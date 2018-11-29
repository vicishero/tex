
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "/data/source/mfw/src/parse/syntax.y"

#include "parse.h"
#include "lex.yy.hpp"
using namespace mfw::sdp;

#define SYNTAX_ERROR(msg) do { g_parser.error((msg)); YYABORT; } while(0)
#define yyerror SYNTAX_ERROR


/* Line 189 of yacc.c  */
#line 83 "syntax.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     TOK_IDENTIFIER = 258,
     TOK_VOID = 259,
     TOK_BOOL = 260,
     TOK_CHAR = 261,
     TOK_SHORT = 262,
     TOK_INT = 263,
     TOK_LONG = 264,
     TOK_FLOAT = 265,
     TOK_DOUBLE = 266,
     TOK_STRING = 267,
     TOK_VECTOR = 268,
     TOK_MAP = 269,
     TOK_SIGNED = 270,
     TOK_UNSIGNED = 271,
     TOK_CONST = 272,
     TOK_STRUCT = 273,
     TOK_KEY = 274,
     TOK_ENUM = 275,
     TOK_NAMESPACE = 276,
     TOK_INTERFACE = 277,
     TOK_SCOPE_OPERATOR = 278,
     TOK_OUT = 279,
     TOK_REQUIRED = 280,
     TOK_OPTIONAL = 281,
     TOK_TRUE = 282,
     TOK_FALSE = 283,
     TOK_NUMBER_LITERAL = 284,
     TOK_STRING_LITERAL = 285
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 155 "syntax.tab.cpp"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,     2,     2,    36,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      34,    37,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    16,    17,    20,    23,
      26,    29,    30,    38,    39,    42,    49,    51,    53,    55,
      57,    59,    62,    65,    67,    70,    72,    75,    77,    80,
      82,    84,    86,    91,    98,   100,   102,   106,   107,   110,
     113,   116,   119,   120,   128,   130,   133,   136,   137,   145,
     147,   151,   152,   155,   156,   164,   165,   168,   169,   177,
     178,   180,   183,   186,   190,   194,   195
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    43,    44,    -1,    -1,    21,     3,
      45,    31,    46,    32,    33,    -1,    -1,    46,    47,    -1,
      46,    55,    -1,    46,    59,    -1,    46,    63,    -1,    -1,
      18,     3,    48,    31,    49,    32,    33,    -1,    -1,    49,
      50,    -1,    29,    51,    52,     3,    54,    33,    -1,    25,
      -1,    26,    -1,     4,    -1,     5,    -1,     6,    -1,    15,
       6,    -1,    16,     6,    -1,     7,    -1,    16,     7,    -1,
       8,    -1,    16,     8,    -1,     9,    -1,    16,     9,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    34,    52,    35,
      -1,    14,    34,    52,    36,    52,    35,    -1,    53,    -1,
       3,    -1,     3,    23,    53,    -1,    -1,    37,    29,    -1,
      37,    30,    -1,    37,    27,    -1,    37,    28,    -1,    -1,
      19,    38,     3,    56,    57,    39,    33,    -1,    58,    -1,
      57,    58,    -1,    36,     3,    -1,    -1,    20,     3,    60,
      31,    61,    32,    33,    -1,    62,    -1,    61,    36,    62,
      -1,    -1,     3,    54,    -1,    -1,    22,     3,    64,    31,
      65,    32,    33,    -1,    -1,    65,    66,    -1,    -1,    52,
       3,    67,    40,    68,    41,    33,    -1,    -1,    70,    -1,
      69,    70,    -1,    70,    36,    -1,    69,    70,    36,    -1,
      71,    52,     3,    -1,    -1,    24,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    42,    47,    46,    59,    61,    62,    63,
      64,    69,    68,    87,    89,    93,   145,   146,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   169,   175,   194,   195,   201,   202,   203,
     204,   205,   210,   209,   224,   225,   229,   249,   248,   268,
     269,   272,   274,   298,   297,   316,   318,   323,   322,   340,
     342,   343,   347,   348,   352,   367,   368
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENTIFIER", "TOK_VOID", "TOK_BOOL",
  "TOK_CHAR", "TOK_SHORT", "TOK_INT", "TOK_LONG", "TOK_FLOAT",
  "TOK_DOUBLE", "TOK_STRING", "TOK_VECTOR", "TOK_MAP", "TOK_SIGNED",
  "TOK_UNSIGNED", "TOK_CONST", "TOK_STRUCT", "TOK_KEY", "TOK_ENUM",
  "TOK_NAMESPACE", "TOK_INTERFACE", "TOK_SCOPE_OPERATOR", "TOK_OUT",
  "TOK_REQUIRED", "TOK_OPTIONAL", "TOK_TRUE", "TOK_FALSE",
  "TOK_NUMBER_LITERAL", "TOK_STRING_LITERAL", "'{'", "'}'", "';'", "'<'",
  "'>'", "','", "'='", "'['", "']'", "'('", "')'", "$accept",
  "definitions", "namespace_def", "$@1", "content_def", "struct_def",
  "$@2", "struct_field_list", "struct_field_item",
  "struct_field_qualifier", "type_specific", "struct_type_specific",
  "default_value_specific", "key_def", "$@3", "key_list", "key_item",
  "enum_def", "$@4", "enum_list", "enum_item", "interface_def", "$@5",
  "operation_list", "operation_item", "$@6", "paramater_list",
  "paramater_list_leading", "paramater_item", "paramater_out_specific", 0
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
     285,   123,   125,    59,    60,    62,    44,    61,    91,    93,
      40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    45,    44,    46,    46,    46,    46,
      46,    48,    47,    49,    49,    50,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    54,    54,    54,
      54,    54,    56,    55,    57,    57,    58,    60,    59,    61,
      61,    62,    62,    64,    63,    65,    65,    67,    66,    68,
      68,    68,    69,    69,    70,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     7,     0,     2,     2,     2,
       2,     0,     7,     0,     2,     6,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     4,     6,     1,     1,     3,     0,     2,     2,
       2,     2,     0,     7,     1,     2,     2,     0,     7,     1,
       3,     0,     2,     0,     7,     0,     2,     0,     7,     0,
       1,     2,     2,     3,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     4,     0,     6,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,     0,
      47,    53,     5,     0,    42,     0,     0,    13,     0,    51,
      55,     0,     0,     0,    44,    37,     0,    49,     0,     0,
       0,    14,    46,     0,    45,     0,    52,     0,    51,    35,
      18,    19,    20,    23,    25,    27,    29,    30,    31,     0,
       0,     0,     0,     0,     0,    34,    56,    16,    17,     0,
      12,    43,    40,    41,    38,    39,    48,    50,     0,     0,
       0,    21,    22,    24,    26,    28,    54,    57,     0,    36,
       0,     0,     0,    37,    32,     0,    65,     0,     0,    66,
       0,    65,    60,     0,    15,    33,     0,    61,    62,     0,
      58,    63,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,     6,     8,    14,    23,    31,    41,    69,
      64,    65,    46,    15,    28,    33,    34,    16,    25,    36,
      37,    17,    26,    38,    66,    92,   100,   101,   102,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int8 yypact[] =
{
     -70,     6,   -70,     5,   -70,   -70,   -22,   -70,    11,    29,
       2,    41,    61,    32,   -70,   -70,   -70,   -70,   -70,    63,
     -70,   -70,   -70,    36,   -70,    37,    38,   -70,    34,    68,
     -70,   -25,    69,     3,   -70,    39,   -31,   -70,     9,   -23,
      40,   -70,   -70,    42,   -70,     8,   -70,    44,    68,    51,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,    45,
      46,    72,    54,    48,    79,   -70,   -70,   -70,   -70,    43,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,    80,    43,
      43,   -70,   -70,   -70,   -70,   -70,   -70,   -70,    81,   -70,
      50,    52,    47,    39,   -70,    43,     4,    53,    55,   -70,
      56,    65,    57,    43,   -70,   -70,    58,    59,   -70,    89,
     -70,   -70,   -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -69,    16,     7,   -70,   -70,   -70,    66,   -70,   -70,   -70,
      60,   -70,   -70,   -70,   -70,   -70,   -70,   -70,    -5,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -60
static const yytype_int8 yytable[] =
{
      88,    47,    67,    68,    39,    48,     2,    40,     5,     7,
      90,    91,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    98,     3,    99,     9,
      10,    11,    18,    12,   109,    72,    73,    74,    75,    32,
      19,    63,    43,    13,    20,   -59,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      82,    83,    84,    85,    21,    22,    24,    27,    29,    30,
      32,    35,    42,    70,    78,    71,    45,    76,    81,    79,
      80,    86,    87,    49,    93,    94,   104,    96,    95,    99,
     105,   110,   112,   108,    89,   111,   107,   106,     0,    44,
      97,     0,     0,     0,     0,     0,     0,     0,    77
};

static const yytype_int8 yycheck[] =
{
      69,    32,    25,    26,    29,    36,     0,    32,     3,    31,
      79,    80,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    95,    21,    24,    18,
      19,    20,     3,    22,   103,    27,    28,    29,    30,    36,
      38,    32,    39,    32,     3,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       6,     7,     8,     9,     3,    33,     3,    31,    31,    31,
      36,     3,     3,    33,    23,    33,    37,    33,     6,    34,
      34,    33,     3,     3,     3,    35,    33,    40,    36,    24,
      35,    33,     3,    36,    78,    36,   101,    41,    -1,    33,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,     0,    21,    44,     3,    45,    31,    46,    18,
      19,    20,    22,    32,    47,    55,    59,    63,     3,    38,
       3,     3,    33,    48,     3,    60,    64,    31,    56,    31,
      31,    49,    36,    57,    58,     3,    61,    62,    65,    29,
      32,    50,     3,    39,    58,    37,    54,    32,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    32,    52,    53,    66,    25,    26,    51,
      33,    33,    27,    28,    29,    30,    33,    62,    23,    34,
      34,     6,     6,     7,     8,     9,    33,     3,    52,    53,
      52,    52,    67,     3,    35,    36,    40,    54,    52,    24,
      68,    69,    70,    71,    33,    35,    41,    70,    36,    52,
      33,    36,     3
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 4:

/* Line 1455 of yacc.c  */
#line 47 "/data/source/mfw/src/parse/syntax.y"
    {
  	SdpNamespace stNamespace;
  	stNamespace.sNamespaceName = (yyvsp[(2) - (2)])->str();
  	ParseContextPtr context = g_parser.getCurContext();
  	context->stTree.vNamespace.push_back(stNamespace);
  	context->pCurNamespace = &context->stTree.vNamespace.back();
  ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 54 "/data/source/mfw/src/parse/syntax.y"
    {
  	g_parser.getCurContext()->pCurNamespace = NULL;
  ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 69 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	if (g_parser.hasClassName(context->pCurNamespace->sNamespaceName, (yyvsp[(2) - (2)])->str()))
  	{
  		SYNTAX_ERROR("struct definition conflict: " + (yyvsp[(2) - (2)])->str());
  	}
  	
  	SdpStruct stStruct;
  	stStruct.sStructName = (yyvsp[(2) - (2)])->str();
  	context->pCurNamespace->vStruct.push_back(stStruct);
  	context->pCurStruct = &context->pCurNamespace->vStruct.back();
  	g_parser.addClassName(ClassType_Struct, context->pCurNamespace->sNamespaceName, stStruct.sStructName);
  ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 82 "/data/source/mfw/src/parse/syntax.y"
    {
  	g_parser.getCurContext()->pCurStruct = NULL;
  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 93 "/data/source/mfw/src/parse/syntax.y"
    {
	NumberTok *pTagTok = (yyvsp[(1) - (6)])->as<NumberTok>();
	if (pTagTok->isSigned())
	{
		SYNTAX_ERROR("tag must be positive: " + (yyvsp[(1) - (6)])->str());
	}
	uint64_t iTag = pTagTok->toUnsignedInt();
	if (iTag > 65535)
	{
		SYNTAX_ERROR("tag must betwee 0 and 65535: " + (yyvsp[(1) - (6)])->str());
	}
	
	ParseContextPtr context = g_parser.getCurContext();
	if (context->pCurStruct->getFieldByTag(iTag) != NULL)
	{
		SYNTAX_ERROR("duplicate struct field tag: " + (yyvsp[(1) - (6)])->str());
	}
	if (context->pCurStruct->getField((yyvsp[(4) - (6)])->str()) != NULL)
	{
		SYNTAX_ERROR("duplicate struct field name: " + (yyvsp[(4) - (6)])->str());
	}
	
	SdpStruct::StructField stStructField;
	stStructField.iTag = iTag;
	stStructField.bRequired = (yyvsp[(2) - (6)])->as<SyntaxIntValue>()->val() ? true : false;
	stStructField.stFieldType = (yyvsp[(3) - (6)])->as<SyntaxSdpType>()->type();
	stStructField.sFieldName = (yyvsp[(4) - (6)])->str();
	if ((yyvsp[(5) - (6)]) != NULL)
	{
		stStructField.bHasDefaultValue = true;
		stStructField.stDefaultValue = (yyvsp[(5) - (6)])->as<SyntaxAssignValue>()->value();
		if (!stStructField.stDefaultValue.isAssignable(stStructField.stFieldType))
		{
			SYNTAX_ERROR("default value cannot assign with different type: " + stStructField.sFieldName);
		}
	}
	
	vector<SdpStruct::StructField> &vStructField = context->pCurStruct->vStructField;
	unsigned pos = vStructField.size();
	for (unsigned i = 0; i < vStructField.size(); ++i)
	{
		if (stStructField.iTag < vStructField[i].iTag)
		{
			pos = i;
			break;
		}
	}
	vStructField.insert(vStructField.begin() + pos, stStructField);
  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 145 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxIntValuePtr(new SyntaxIntValue(1)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 146 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxIntValuePtr(new SyntaxIntValue(0)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 150 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Void)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 151 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Bool)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 152 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Char)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 153 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Int8)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 154 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_UInt8)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 155 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Int16)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 156 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_UInt16)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 157 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Int32)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 158 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_UInt32)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 159 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Int64)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 160 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_UInt64)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 161 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Float)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 162 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Double)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 163 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_String)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 164 "/data/source/mfw/src/parse/syntax.y"
    {
	SyntaxSdpTypePtr ptype = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Vector)); 
	ptype->type().vInnerType.push_back((yyvsp[(3) - (4)])->as<SyntaxSdpType>()->type());
	(yyval) = ptype;
  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 169 "/data/source/mfw/src/parse/syntax.y"
    {
	SyntaxSdpTypePtr ptype = SyntaxSdpTypePtr(new SyntaxSdpType(SdpType_Map)); 
	ptype->type().vInnerType.push_back((yyvsp[(3) - (6)])->as<SyntaxSdpType>()->type());
	ptype->type().vInnerType.push_back((yyvsp[(5) - (6)])->as<SyntaxSdpType>()->type());
	(yyval) = ptype;
  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 175 "/data/source/mfw/src/parse/syntax.y"
    {
	ParseContextPtr context = g_parser.getCurContext();
	if (!g_parser.hasClassName(ClassType_Struct, context->pCurNamespace->sNamespaceName, (yyvsp[(1) - (1)])->str())
		&& !g_parser.hasClassName(ClassType_Enum, context->pCurNamespace->sNamespaceName, (yyvsp[(1) - (1)])->str()))
	{
		SYNTAX_ERROR("undefined struct type: " + (yyvsp[(1) - (1)])->str());
	}
	SdpTypeId type = g_parser.hasClassName(ClassType_Struct, context->pCurNamespace->sNamespaceName, (yyvsp[(1) - (1)])->str()) ? SdpType_Struct : SdpType_Enum;
	const string &sTypeName = (yyvsp[(1) - (1)])->str();
	string sTypeFullName = sTypeName;
	if (sTypeName.find("::") == string::npos)
	{
		sTypeFullName = context->pCurNamespace->sNamespaceName + "::" + sTypeName;
	} 
	(yyval) = SyntaxSdpTypePtr(new SyntaxSdpType(type, sTypeName, sTypeFullName));
  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 195 "/data/source/mfw/src/parse/syntax.y"
    {
	(yyval) = StringTokPtr(new StringTok((yyvsp[(1) - (3)])->str() + "::" + (yyvsp[(3) - (3)])->str()));
  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 201 "/data/source/mfw/src/parse/syntax.y"
    { (yyval).reset(); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 202 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxAssignValuePtr(new SyntaxAssignValue((yyvsp[(2) - (2)])->as<NumberTok>()->isInteger() ? SdpAssignValue::ValueType_Integer : SdpAssignValue::ValueType_Float, (yyvsp[(2) - (2)])->str())); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 203 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxAssignValuePtr(new SyntaxAssignValue(SdpAssignValue::ValueType_String, (yyvsp[(2) - (2)])->str())); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 204 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxAssignValuePtr(new SyntaxAssignValue(SdpAssignValue::ValueType_Boolean, true)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 205 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxAssignValuePtr(new SyntaxAssignValue(SdpAssignValue::ValueType_Boolean, false)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 210 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	context->pCurStruct = context->pCurNamespace->getStruct((yyvsp[(3) - (3)])->str());
  	if (context->pCurStruct == NULL)
  	{
  		SYNTAX_ERROR("undefined struct: " + (yyvsp[(3) - (3)])->str());
  	}
  ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 218 "/data/source/mfw/src/parse/syntax.y"
    {
  	g_parser.getCurContext()->pCurStruct = NULL;
  ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 229 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	SdpStruct &stStruct = *context->pCurStruct;
  	if (stStruct.getField((yyvsp[(2) - (2)])->str()) == NULL)
  	{
  		SYNTAX_ERROR("undefined sort key: " + (yyvsp[(2) - (2)])->str());
  	}
  	for (unsigned i = 0; i < stStruct.vSortKey.size(); ++i)
  	{
  		if (stStruct.vSortKey[i] == (yyvsp[(2) - (2)])->str())
  		{
  			SYNTAX_ERROR("duplicate sort key: " + (yyvsp[(2) - (2)])->str());
  		}
  	}
  	stStruct.vSortKey.push_back((yyvsp[(2) - (2)])->str());
  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 249 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	if (g_parser.hasClassName(context->pCurNamespace->sNamespaceName, (yyvsp[(2) - (2)])->str()))
  	{
  		SYNTAX_ERROR("enum definition conflict: " + (yyvsp[(2) - (2)])->str());
  	}
  	
  	SdpEnum stEnum;
  	stEnum.sEnumName = (yyvsp[(2) - (2)])->str();
  	context->pCurNamespace->vEnum.push_back(stEnum);
  	context->pCurEnum = &context->pCurNamespace->vEnum.back();
  	g_parser.addClassName(ClassType_Enum, context->pCurNamespace->sNamespaceName, stEnum.sEnumName);
  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 262 "/data/source/mfw/src/parse/syntax.y"
    {
  	g_parser.getCurContext()->pCurEnum = NULL;
  ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 274 "/data/source/mfw/src/parse/syntax.y"
    {
	ParseContextPtr context = g_parser.getCurContext();
	if (context->pCurEnum->getEnumItem((yyvsp[(1) - (2)])->str()) != NULL)
	{
		SYNTAX_ERROR("duplicate enum item: " + (yyvsp[(1) - (2)])->str());
	}
	
  	SdpEnum::EnumItem stEnumItem;
  	stEnumItem.sName = (yyvsp[(1) - (2)])->str();
  	if ((yyvsp[(2) - (2)]) != NULL)
  	{
  		stEnumItem.bHasAssignValue = true;
  		stEnumItem.stAssignValue = (yyvsp[(2) - (2)])->as<SyntaxAssignValue>()->value();
  		if (!stEnumItem.stAssignValue.isAssignable(SdpType_Int32))
		{
			SYNTAX_ERROR("default value cannot assign with different type: " + stEnumItem.sName);
		}
  	}
	context->pCurEnum->vEnumItem.push_back(stEnumItem);
  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 298 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	if (g_parser.hasClassName(context->pCurNamespace->sNamespaceName, (yyvsp[(2) - (2)])->str()))
  	{
  		SYNTAX_ERROR("interface definition conflict: " + (yyvsp[(2) - (2)])->str());
  	}

  	SdpInterface stInterface;
  	stInterface.sInterfaceName = (yyvsp[(2) - (2)])->str();
  	context->pCurNamespace->vInterface.push_back(stInterface);
  	context->pCurInterface = &context->pCurNamespace->vInterface.back();
  	g_parser.addClassName(ClassType_Interface, context->pCurNamespace->sNamespaceName, stInterface.sInterfaceName);
  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 311 "/data/source/mfw/src/parse/syntax.y"
    {
  	g_parser.getCurContext()->pCurInterface = NULL;
  ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 323 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	if (context->pCurInterface->getOperation((yyvsp[(2) - (2)])->str()) != NULL)
  	{
  		SYNTAX_ERROR("duplicate operation: " + (yyvsp[(2) - (2)])->str());
  	}
  	SdpInterface::Operation stOperation;
  	stOperation.stRetType = (yyvsp[(1) - (2)])->as<SyntaxSdpType>()->type();
  	stOperation.sOperationName = (yyvsp[(2) - (2)])->str();
  	context->pCurInterface->vOperation.push_back(stOperation);
  	context->pCurOperation = &context->pCurInterface->vOperation.back();
  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 335 "/data/source/mfw/src/parse/syntax.y"
    {
  	g_parser.getCurContext()->pCurOperation = NULL;
  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 352 "/data/source/mfw/src/parse/syntax.y"
    {
  	ParseContextPtr context = g_parser.getCurContext();
  	if (context->pCurOperation->getParamater((yyvsp[(3) - (3)])->str()) != NULL)
  	{
  		SYNTAX_ERROR("duplicate paramater: " + (yyvsp[(3) - (3)])->str());
  	}
  	SdpInterface::Paramater stParamater;
  	stParamater.bIsOut = (yyvsp[(1) - (3)])->as<SyntaxIntValue>()->val() ? true : false;
  	stParamater.stParamType = (yyvsp[(2) - (3)])->as<SyntaxSdpType>()->type();
  	stParamater.sParamName = (yyvsp[(3) - (3)])->str();
  	context->pCurOperation->vParam.push_back(stParamater);
  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 367 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxIntValuePtr(new SyntaxIntValue(0)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 368 "/data/source/mfw/src/parse/syntax.y"
    { (yyval) = SyntaxIntValuePtr(new SyntaxIntValue(1)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1944 "syntax.tab.cpp"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 371 "/data/source/mfw/src/parse/syntax.y"


