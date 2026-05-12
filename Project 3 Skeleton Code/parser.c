/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"


#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

#include "values.h"
#include "listing.h"
#include "symbols.h"

int mainReturnType = 0;   
double result = NAN;

int yylex();
void yyerror(const char* message);
double extract_element(CharPtr list_name, double subscript);
double switchValue;

Symbols<double> scalars;
Symbols<vector<double>*> lists;

vector<double> parameters;
int paramIndex = 0;


#line 101 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_LITERAL = 4,                /* INT_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 5,               /* CHAR_LITERAL  */
  YYSYMBOL_REAL_LITERAL = 6,               /* REAL_LITERAL  */
  YYSYMBOL_ADDOP = 7,                      /* ADDOP  */
  YYSYMBOL_MULOP = 8,                      /* MULOP  */
  YYSYMBOL_ANDOP = 9,                      /* ANDOP  */
  YYSYMBOL_RELOP = 10,                     /* RELOP  */
  YYSYMBOL_REMOP = 11,                     /* REMOP  */
  YYSYMBOL_EXPOP = 12,                     /* EXPOP  */
  YYSYMBOL_NEGOP = 13,                     /* NEGOP  */
  YYSYMBOL_OROP = 14,                      /* OROP  */
  YYSYMBOL_NOTOP = 15,                     /* NOTOP  */
  YYSYMBOL_ARROW = 16,                     /* ARROW  */
  YYSYMBOL_BEGIN_ = 17,                    /* BEGIN_  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_CHARACTER = 19,                 /* CHARACTER  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_END = 21,                       /* END  */
  YYSYMBOL_ENDSWITCH = 22,                 /* ENDSWITCH  */
  YYSYMBOL_FUNCTION = 23,                  /* FUNCTION  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_IS = 25,                        /* IS  */
  YYSYMBOL_LIST = 26,                      /* LIST  */
  YYSYMBOL_OF = 27,                        /* OF  */
  YYSYMBOL_OTHERS = 28,                    /* OTHERS  */
  YYSYMBOL_RETURNS = 29,                   /* RETURNS  */
  YYSYMBOL_SWITCH = 30,                    /* SWITCH  */
  YYSYMBOL_WHEN = 31,                      /* WHEN  */
  YYSYMBOL_REAL = 32,                      /* REAL  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_THEN = 34,                      /* THEN  */
  YYSYMBOL_ELSIF = 35,                     /* ELSIF  */
  YYSYMBOL_ENDIF = 36,                     /* ENDIF  */
  YYSYMBOL_FOLD = 37,                      /* FOLD  */
  YYSYMBOL_LEFT = 38,                      /* LEFT  */
  YYSYMBOL_RIGHT = 39,                     /* RIGHT  */
  YYSYMBOL_ENDFOLD = 40,                   /* ENDFOLD  */
  YYSYMBOL_WITH = 41,                      /* WITH  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_function = 48,                  /* function  */
  YYSYMBOL_function_header = 49,           /* function_header  */
  YYSYMBOL_parameters = 50,                /* parameters  */
  YYSYMBOL_type = 51,                      /* type  */
  YYSYMBOL_optional_variable = 52,         /* optional_variable  */
  YYSYMBOL_variable = 53,                  /* variable  */
  YYSYMBOL_list = 54,                      /* list  */
  YYSYMBOL_expressions = 55,               /* expressions  */
  YYSYMBOL_body = 56,                      /* body  */
  YYSYMBOL_statement_ = 57,                /* statement_  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_elsif_list = 59,                /* elsif_list  */
  YYSYMBOL_else_part = 60,                 /* else_part  */
  YYSYMBOL_cases = 61,                     /* cases  */
  YYSYMBOL_case = 62,                      /* case  */
  YYSYMBOL_condition = 63,                 /* condition  */
  YYSYMBOL_relation = 64,                  /* relation  */
  YYSYMBOL_expression = 65,                /* expression  */
  YYSYMBOL_term = 66,                      /* term  */
  YYSYMBOL_power = 67,                     /* power  */
  YYSYMBOL_unary = 68,                     /* unary  */
  YYSYMBOL_primary = 69                    /* primary  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    42,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    80,    85,    92,    99,   103,   104,   105,
     109,   110,   113,   115,   117,   119,   121,   126,   129,   130,
     133,   136,   137,   140,   141,   143,   146,   148,   150,   153,
     164,   178,   180,   184,   185,   189,   190,   191,   194,   198,
     199,   200,   201,   204,   205,   208,   209,   212,   213,   214,
     217,   218,   221,   222,   225,   226,   227,   228,   229,   230
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INT_LITERAL", "CHAR_LITERAL", "REAL_LITERAL", "ADDOP", "MULOP", "ANDOP",
  "RELOP", "REMOP", "EXPOP", "NEGOP", "OROP", "NOTOP", "ARROW", "BEGIN_",
  "CASE", "CHARACTER", "ELSE", "END", "ENDSWITCH", "FUNCTION", "INTEGER",
  "IS", "LIST", "OF", "OTHERS", "RETURNS", "SWITCH", "WHEN", "REAL", "IF",
  "THEN", "ELSIF", "ENDIF", "FOLD", "LEFT", "RIGHT", "ENDFOLD", "WITH",
  "';'", "':'", "','", "'('", "')'", "$accept", "function",
  "function_header", "parameters", "type", "optional_variable", "variable",
  "list", "expressions", "body", "statement_", "statement", "elsif_list",
  "else_part", "cases", "case", "condition", "relation", "expression",
  "term", "power", "unary", "primary", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    27,    24,    53,    73,   -81,    63,   109,    53,   113,
      33,   128,    30,   104,   -81,   138,   138,   156,   -81,   -81,
     136,   -81,   142,   132,   124,   -81,   -81,   -81,     8,     8,
     119,   119,   133,     8,   152,   134,   168,    21,   -81,   165,
     -81,   -81,   -81,   137,   135,   138,    88,   -81,     8,   -81,
      74,    82,   119,    93,   -81,   110,   121,   173,   174,     2,
     -81,   -81,     8,     8,     8,     8,   -81,   138,   157,     8,
     119,   119,    61,    20,   166,   -81,    65,    18,    82,    82,
       8,     8,    67,    12,    13,   -81,    21,   -81,   -81,   -81,
     -81,   140,   103,   100,   127,   -81,   -81,   179,   111,   -81,
     -81,   -81,   -81,    -4,   168,   144,   147,     8,   148,   149,
     150,   151,   166,     8,    67,   175,   176,   -81,     8,   -81,
     -81,   122,   168,   -81,   -81,   -81,   -81,   130,     3,   153,
      67,    67,   168,   118,     8,   -81,   178,     8,   -81,   154,
     155,    67,   119,   162,   168,    67,    89,   118,   -81,   177,
     158,   131,   -81,   159,   -81,   167,   -81,   -81,    67,   180,
     163,   164,   169,   -81,   -81,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    11,     6,     1,     0,     0,    11,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     8,     7,
       0,     9,     0,     0,    59,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    46,    49,    50,
      53,     2,     4,     0,     0,     0,     0,    22,     0,    52,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
      20,    21,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,    37,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    45,    47,    48,    51,
       5,     0,     0,     0,     0,    12,    58,     0,     0,    36,
      43,    39,    40,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    35,     0,    32,
      29,     0,    19,    27,    30,    28,    13,     0,     0,     0,
       0,     0,    24,    34,     0,    17,     0,     0,    32,     0,
       0,     0,     0,     0,    18,     0,     0,    34,    38,     0,
       0,     0,    26,     0,    14,     0,    25,    33,     0,     0,
       0,     0,     0,    16,    31,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   -81,    -8,   196,   -81,    -1,   -81,   -81,
     -81,   -76,    69,    62,    96,   -80,   -26,    64,   -29,   160,
      86,   182,   -81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    10,    22,     7,     8,   108,   121,    13,
      34,    35,   133,   143,    98,    99,    53,    54,    36,    37,
      38,    39,    40
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    55,    55,    62,    59,    56,   105,    42,    43,    62,
      62,    24,    25,    26,    27,   106,   109,    72,   117,    73,
       1,    28,    55,    77,     5,    62,    76,    62,    81,    63,
       4,    23,    64,    24,    25,    26,    27,    68,   129,   118,
      92,    55,    55,    28,    93,    94,   137,   117,    85,    55,
      55,   103,   104,    33,   139,   140,     6,   107,   107,    90,
      29,    30,    16,    31,    85,   150,    96,    32,    62,   153,
      24,    25,    26,    27,    78,    33,     9,    17,   122,    79,
      28,    62,   161,   110,   128,    24,    25,    26,    27,   132,
     111,    24,    25,    26,    27,    28,    62,    29,    30,    74,
      31,    28,    78,    95,    32,   144,    11,    79,   146,    78,
      62,   100,    33,    55,    79,    75,   151,    62,    69,    70,
      81,    71,    24,    25,    26,    27,    12,    52,   112,    97,
      78,   154,    28,    33,    51,    79,    78,    80,   141,   116,
      78,    79,   101,   102,   113,    79,    41,    18,    97,    87,
      88,    89,    19,   142,    20,    82,    15,    18,   136,    44,
      21,   114,    19,    45,    52,   158,   134,    46,   135,    48,
      21,    57,    58,    60,    47,    62,    61,    65,    67,    66,
      83,    84,    91,   115,    97,   107,   119,   120,   123,   124,
     125,   130,   131,   126,   145,   138,   148,   149,   152,   156,
     157,   159,   162,   160,    14,   163,   164,   147,   127,   155,
      49,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86
};

static const yytype_int16 yycheck[] =
{
      29,    30,    31,     7,    33,    31,    82,    15,    16,     7,
       7,     3,     4,     5,     6,     3,     3,    46,    98,    48,
      23,    13,    51,    52,     0,     7,    52,     7,    10,     8,
       3,     1,    11,     3,     4,     5,     6,    45,   114,    43,
      69,    70,    71,    13,    70,    71,    43,   127,    46,    78,
      79,    80,    81,    45,   130,   131,     3,    45,    45,    67,
      30,    31,    29,    33,    46,   141,    46,    37,     7,   145,
       3,     4,     5,     6,     9,    45,     3,    44,   107,    14,
      13,     7,   158,    84,   113,     3,     4,     5,     6,   118,
      91,     3,     4,     5,     6,    13,     7,    30,    31,    25,
      33,    13,     9,    42,    37,   134,    43,    14,   137,     9,
       7,    46,    45,   142,    14,    51,   142,     7,    30,    31,
      10,    33,     3,     4,     5,     6,    17,    45,    25,    18,
       9,    42,    13,    45,    15,    14,     9,    44,    20,    28,
       9,    14,    78,    79,    44,    14,    42,    19,    18,    63,
      64,    65,    24,    35,    26,    34,    43,    19,    28,     3,
      32,    34,    24,    27,    45,    34,    44,    25,    46,    45,
      32,    38,    39,    21,    42,     7,    42,    12,    43,    42,
       7,     7,    25,     4,    18,    45,    42,    40,    40,    40,
      40,    16,    16,    42,    16,    42,    42,    42,    36,    22,
      42,    42,    22,    36,     8,    42,    42,   138,   112,   147,
      28,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    48,    49,     3,     0,     3,    52,    53,     3,
      50,    43,    17,    56,    52,    43,    29,    44,    19,    24,
      26,    32,    51,     1,     3,     4,     5,     6,    13,    30,
      31,    33,    37,    45,    57,    58,    65,    66,    67,    68,
      69,    42,    51,    51,     3,    27,    25,    42,    45,    68,
      65,    15,    45,    63,    64,    65,    63,    38,    39,    65,
      21,    42,     7,     8,    11,    12,    42,    43,    51,    30,
      31,    33,    65,    65,    25,    64,    63,    65,     9,    14,
      44,    10,    34,     7,     7,    46,    66,    67,    67,    67,
      51,    25,    65,    63,    63,    42,    46,    18,    61,    62,
      46,    64,    64,    65,    65,    58,     3,    45,    54,     3,
      54,    54,    25,    44,    34,     4,    28,    62,    43,    42,
      40,    55,    65,    40,    40,    40,    42,    61,    65,    58,
      16,    16,    65,    59,    44,    46,    28,    43,    42,    58,
      58,    20,    35,    60,    65,    16,    65,    59,    42,    42,
      58,    63,    36,    58,    42,    60,    22,    42,    34,    42,
      36,    58,    22,    42,    42,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    50,    50,    51,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    54,    55,    55,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    62,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     6,     3,     5,     0,     1,     1,     1,
       2,     0,     6,     8,    11,    14,    13,     3,     3,     1,
       3,     2,     2,     1,     6,     9,     8,     5,     5,     5,
       5,     6,     0,     3,     0,     2,     1,     0,     5,     3,
       3,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       1,     3,     2,     1,     3,     1,     1,     1,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* function: function_header optional_variable body ';'  */
#line 73 "parser.y"
            {
                 mainReturnType = (yyvsp[-3].value);
                 result = (yyvsp[-1].value);
             }
#line 1540 "parser.tab.c"
    break;

  case 3: /* function_header: FUNCTION IDENTIFIER parameters RETURNS type ';'  */
#line 81 "parser.y"
        { (yyval.value) = (yyvsp[-1].value); }
#line 1546 "parser.tab.c"
    break;

  case 4: /* parameters: IDENTIFIER ':' type  */
#line 85 "parser.y"
                        { 
        if (paramIndex < parameters.size()) {
            scalars.insert((yyvsp[-2].iden), parameters[paramIndex++]);
        } else {
            appendError(SYNTAX, "Missing command-line argument for parameter");
        }
    }
#line 1558 "parser.tab.c"
    break;

  case 5: /* parameters: parameters ',' IDENTIFIER ':' type  */
#line 92 "parser.y"
                                       {
        if (paramIndex < parameters.size()) {
            scalars.insert((yyvsp[-2].iden), parameters[paramIndex++]);
        } else {
            appendError(SYNTAX, "Missing command-line argument for parameter");
        }
    }
#line 1570 "parser.tab.c"
    break;

  case 7: /* type: INTEGER  */
#line 103 "parser.y"
                 { (yyval.value) = 1; }
#line 1576 "parser.tab.c"
    break;

  case 8: /* type: CHARACTER  */
#line 104 "parser.y"
                  { (yyval.value) = 2; }
#line 1582 "parser.tab.c"
    break;

  case 9: /* type: REAL  */
#line 105 "parser.y"
             { (yyval.value) = 3; }
#line 1588 "parser.tab.c"
    break;

  case 12: /* variable: IDENTIFIER ':' type IS expression ';'  */
#line 114 "parser.y"
        { scalars.insert((yyvsp[-5].iden), (yyvsp[-1].value)); (yyval.value) = (yyvsp[-1].value); }
#line 1594 "parser.tab.c"
    break;

  case 13: /* variable: IDENTIFIER ':' LIST OF type IS list ';'  */
#line 116 "parser.y"
        { lists.insert((yyvsp[-7].iden), (yyvsp[-1].list)); }
#line 1600 "parser.tab.c"
    break;

  case 14: /* variable: IDENTIFIER ':' type IS WHEN condition ',' expression ':' expression ';'  */
#line 118 "parser.y"
        { scalars.insert((yyvsp[-10].iden), (yyvsp[-5].value) ? (yyvsp[-3].value) : (yyvsp[-1].value)); (yyval.value) = (yyvsp[-5].value) ? (yyvsp[-3].value) : (yyvsp[-1].value); }
#line 1606 "parser.tab.c"
    break;

  case 15: /* variable: IDENTIFIER ':' type IS SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH ';'  */
#line 120 "parser.y"
        { scalars.insert((yyvsp[-13].iden), !isnan((yyvsp[-6].value)) ? (yyvsp[-6].value) : (yyvsp[-3].value)); (yyval.value) = !isnan((yyvsp[-6].value)) ? (yyvsp[-6].value) : (yyvsp[-3].value); }
#line 1612 "parser.tab.c"
    break;

  case 16: /* variable: IDENTIFIER ':' type IS IF condition THEN statement ';' elsif_list else_part ENDIF ';'  */
#line 122 "parser.y"
        { scalars.insert((yyvsp[-12].iden), (yyvsp[-7].value) ? (yyvsp[-5].value) : (!isnan((yyvsp[-3].value)) ? (yyvsp[-3].value) : (yyvsp[-2].value))); (yyval.value) = (yyvsp[-7].value) ? (yyvsp[-5].value) : (!isnan((yyvsp[-3].value)) ? (yyvsp[-3].value) : (yyvsp[-2].value)); }
#line 1618 "parser.tab.c"
    break;

  case 17: /* list: '(' expressions ')'  */
#line 126 "parser.y"
                            {(yyval.list) = (yyvsp[-1].list);}
#line 1624 "parser.tab.c"
    break;

  case 18: /* expressions: expressions ',' expression  */
#line 129 "parser.y"
                                   {(yyvsp[-2].list)->push_back((yyvsp[0].value)); (yyval.list) = (yyvsp[-2].list);}
#line 1630 "parser.tab.c"
    break;

  case 19: /* expressions: expression  */
#line 130 "parser.y"
                   {(yyval.list) = new vector<double>(); (yyval.list)->push_back((yyvsp[0].value));}
#line 1636 "parser.tab.c"
    break;

  case 20: /* body: BEGIN_ statement_ END  */
#line 133 "parser.y"
                              {(yyval.value) = (yyvsp[-1].value);}
#line 1642 "parser.tab.c"
    break;

  case 22: /* statement_: error ';'  */
#line 137 "parser.y"
                  {(yyval.value) = 0;}
#line 1648 "parser.tab.c"
    break;

  case 24: /* statement: WHEN condition ',' expression ':' expression  */
#line 142 "parser.y"
        { (yyval.value) = (yyvsp[-4].value) ? (yyvsp[-2].value) : (yyvsp[0].value); }
#line 1654 "parser.tab.c"
    break;

  case 25: /* statement: SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH  */
#line 144 "parser.y"
        { switchValue = (yyvsp[-7].value);
          (yyval.value) = !isnan((yyvsp[-5].value)) ? (yyvsp[-5].value) : (yyvsp[-2].value); }
#line 1661 "parser.tab.c"
    break;

  case 26: /* statement: IF condition THEN statement ';' elsif_list else_part ENDIF  */
#line 147 "parser.y"
        { (yyval.value) = (yyvsp[-6].value) ? (yyvsp[-4].value) : (!isnan((yyvsp[-2].value)) ? (yyvsp[-2].value) : (yyvsp[-1].value)); }
#line 1667 "parser.tab.c"
    break;

  case 27: /* statement: FOLD LEFT ADDOP list ENDFOLD  */
#line 149 "parser.y"
        { (yyval.value) = evaluateFold(DIR_LEFT, (yyvsp[-2].oper), (yyvsp[-1].list)); }
#line 1673 "parser.tab.c"
    break;

  case 28: /* statement: FOLD RIGHT ADDOP list ENDFOLD  */
#line 151 "parser.y"
        { (yyval.value) = evaluateFold(DIR_RIGHT, (yyvsp[-2].oper), (yyvsp[-1].list)); }
#line 1679 "parser.tab.c"
    break;

  case 29: /* statement: FOLD LEFT ADDOP IDENTIFIER ENDFOLD  */
#line 154 "parser.y"
        {
            vector<double>* list;
            CharPtr name = (yyvsp[-1].iden);
            if (lists.find(name, list)) {
                (yyval.value) = evaluateFold(DIR_LEFT, (yyvsp[-2].oper), list);
            } else {
                appendError(UNDECLARED, name);
                (yyval.value) = NAN;
            }
        }
#line 1694 "parser.tab.c"
    break;

  case 30: /* statement: FOLD RIGHT ADDOP IDENTIFIER ENDFOLD  */
#line 165 "parser.y"
        {
            vector<double>* list;
            CharPtr name = (yyvsp[-1].iden);
            if (lists.find(name, list)) {
                (yyval.value) = evaluateFold(DIR_RIGHT, (yyvsp[-2].oper), list);
            } else {
                appendError(UNDECLARED, name);
                (yyval.value) = NAN;
            }
        }
#line 1709 "parser.tab.c"
    break;

  case 31: /* elsif_list: elsif_list ELSIF condition THEN statement ';'  */
#line 179 "parser.y"
        { (yyval.value) = (yyvsp[-3].value) ? (yyvsp[-1].value) : (yyvsp[-5].value); }
#line 1715 "parser.tab.c"
    break;

  case 32: /* elsif_list: %empty  */
#line 180 "parser.y"
           { (yyval.value) = NAN; }
#line 1721 "parser.tab.c"
    break;

  case 33: /* else_part: ELSE statement ';'  */
#line 184 "parser.y"
                       { (yyval.value) = (yyvsp[-1].value); }
#line 1727 "parser.tab.c"
    break;

  case 34: /* else_part: %empty  */
#line 185 "parser.y"
           { (yyval.value) = NAN; }
#line 1733 "parser.tab.c"
    break;

  case 35: /* cases: cases case  */
#line 189 "parser.y"
                   {(yyval.value) = !isnan((yyvsp[-1].value)) ? (yyvsp[-1].value) : (yyvsp[0].value);}
#line 1739 "parser.tab.c"
    break;

  case 37: /* cases: %empty  */
#line 191 "parser.y"
               {(yyval.value) = NAN;}
#line 1745 "parser.tab.c"
    break;

  case 38: /* case: CASE INT_LITERAL ARROW statement ';'  */
#line 195 "parser.y"
        { (yyval.value) = (switchValue == (yyvsp[-3].value)) ? (yyvsp[-1].value) : NAN;}
#line 1751 "parser.tab.c"
    break;

  case 39: /* condition: condition ANDOP relation  */
#line 198 "parser.y"
                             { (yyval.value) = (yyvsp[-2].value) && (yyvsp[0].value); }
#line 1757 "parser.tab.c"
    break;

  case 40: /* condition: condition OROP relation  */
#line 199 "parser.y"
                             { (yyval.value) = (yyvsp[-2].value) || (yyvsp[0].value); }
#line 1763 "parser.tab.c"
    break;

  case 41: /* condition: NOTOP relation  */
#line 200 "parser.y"
                             { (yyval.value) = !(yyvsp[0].value); }
#line 1769 "parser.tab.c"
    break;

  case 43: /* relation: '(' condition ')'  */
#line 204 "parser.y"
                          {(yyval.value) = (yyvsp[-1].value);}
#line 1775 "parser.tab.c"
    break;

  case 44: /* relation: expression RELOP expression  */
#line 205 "parser.y"
                                    {(yyval.value) = evaluateRelational((yyvsp[-2].value), (yyvsp[-1].oper), (yyvsp[0].value));}
#line 1781 "parser.tab.c"
    break;

  case 45: /* expression: expression ADDOP term  */
#line 208 "parser.y"
                              {(yyval.value) = evaluateArithmetic((yyvsp[-2].value), (yyvsp[-1].oper), (yyvsp[0].value));}
#line 1787 "parser.tab.c"
    break;

  case 47: /* term: term MULOP power  */
#line 212 "parser.y"
                                 { (yyval.value) = evaluateArithmetic((yyvsp[-2].value), (yyvsp[-1].oper), (yyvsp[0].value)); }
#line 1793 "parser.tab.c"
    break;

  case 48: /* term: term REMOP power  */
#line 213 "parser.y"
                                 { (yyval.value) = evaluateArithmetic((yyvsp[-2].value), (yyvsp[-1].oper), (yyvsp[0].value)); }
#line 1799 "parser.tab.c"
    break;

  case 51: /* power: unary EXPOP power  */
#line 218 "parser.y"
                                 { (yyval.value) = evaluateArithmetic((yyvsp[-2].value), (yyvsp[-1].oper), (yyvsp[0].value)); }
#line 1805 "parser.tab.c"
    break;

  case 52: /* unary: NEGOP unary  */
#line 221 "parser.y"
                    {(yyval.value) = evaluateArithmetic(0, (yyvsp[-1].oper), (yyvsp[0].value));}
#line 1811 "parser.tab.c"
    break;

  case 54: /* primary: '(' expression ')'  */
#line 225 "parser.y"
                           {(yyval.value) = (yyvsp[-1].value);}
#line 1817 "parser.tab.c"
    break;

  case 58: /* primary: IDENTIFIER '(' expression ')'  */
#line 229 "parser.y"
                                      {(yyval.value) = extract_element((yyvsp[-3].iden), (yyvsp[-1].value)); }
#line 1823 "parser.tab.c"
    break;

  case 59: /* primary: IDENTIFIER  */
#line 230 "parser.y"
                   {if (!scalars.find((yyvsp[0].iden), (yyval.value))) appendError(UNDECLARED, (yyvsp[0].iden));}
#line 1829 "parser.tab.c"
    break;


#line 1833 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 232 "parser.y"


void yyerror(const char* message) {
	appendError(SYNTAX, message);
}

double extract_element(CharPtr list_name, double subscript) {
	vector<double>* list; 
	if (lists.find(list_name, list))
		return (*list)[subscript];
	appendError(UNDECLARED, list_name);
	return NAN;
}

int main(int argc, char *argv[]) {
	firstLine();

        for (int i = 1; i < argc; i++) {
            parameters.push_back(atof(argv[i]));
        }
	yyparse();
	if (lastLine() == 0)
                cout << "Compiled Successfully" << endl;
		cout << "Result = " << result << endl;
	return 0;
} 
