// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.tab.hh"


// Unqualified %code blocks.
#line 11 "parser.yy"

  #define YY_DECL yy::parser::symbol_type yylex()

  YY_DECL;
  
  Node* root;
  

#line 55 "parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 128 "parser.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_mainclass: // mainclass
      case symbol_kind::S_stringarr: // stringarr
      case symbol_kind::S_statementlist: // statementlist
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_expressionlist: // expressionlist
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_methoddeclaration: // methoddeclaration
      case symbol_kind::S_classdeclaration: // classdeclaration
      case symbol_kind::S_classdeclarationlist: // classdeclarationlist
      case symbol_kind::S_vardeclarationlist: // vardeclarationlist
      case symbol_kind::S_vardeclaration: // vardeclaration
      case symbol_kind::S_parameterlist: // parameterlist
      case symbol_kind::S_methoddeclarationlist: // methoddeclarationlist
      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_type: // type
        value.YY_MOVE_OR_COPY< Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PLUSOP: // PLUSOP
      case symbol_kind::S_MINUSOP: // MINUSOP
      case symbol_kind::S_MULTOP: // MULTOP
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LEFTM: // LEFTM
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_LEFTP: // LEFTP
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_LEFTB: // LEFTB
      case symbol_kind::S_RIGHTB: // RIGHTB
      case symbol_kind::S_RIGHTP: // RIGHTP
      case symbol_kind::S_RIGHTM: // RIGHTM
      case symbol_kind::S_INTT: // INTT
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_SOP: // SOP
      case symbol_kind::S_SEMIC: // SEMIC
      case symbol_kind::S_EQOP: // EQOP
      case symbol_kind::S_ANDOP: // ANDOP
      case symbol_kind::S_OROP: // OROP
      case symbol_kind::S_LESSOP: // LESSOP
      case symbol_kind::S_MOREOP: // MOREOP
      case symbol_kind::S_EQIF: // EQIF
      case symbol_kind::S_MINOP: // MINOP
      case symbol_kind::S_DIVOP: // DIVOP
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXQL: // EXQL
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_mainclass: // mainclass
      case symbol_kind::S_stringarr: // stringarr
      case symbol_kind::S_statementlist: // statementlist
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_expressionlist: // expressionlist
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_methoddeclaration: // methoddeclaration
      case symbol_kind::S_classdeclaration: // classdeclaration
      case symbol_kind::S_classdeclarationlist: // classdeclarationlist
      case symbol_kind::S_vardeclarationlist: // vardeclarationlist
      case symbol_kind::S_vardeclaration: // vardeclaration
      case symbol_kind::S_parameterlist: // parameterlist
      case symbol_kind::S_methoddeclarationlist: // methoddeclarationlist
      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_type: // type
        value.move< Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PLUSOP: // PLUSOP
      case symbol_kind::S_MINUSOP: // MINUSOP
      case symbol_kind::S_MULTOP: // MULTOP
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LEFTM: // LEFTM
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_LEFTP: // LEFTP
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_LEFTB: // LEFTB
      case symbol_kind::S_RIGHTB: // RIGHTB
      case symbol_kind::S_RIGHTP: // RIGHTP
      case symbol_kind::S_RIGHTM: // RIGHTM
      case symbol_kind::S_INTT: // INTT
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_SOP: // SOP
      case symbol_kind::S_SEMIC: // SEMIC
      case symbol_kind::S_EQOP: // EQOP
      case symbol_kind::S_ANDOP: // ANDOP
      case symbol_kind::S_OROP: // OROP
      case symbol_kind::S_LESSOP: // LESSOP
      case symbol_kind::S_MOREOP: // MOREOP
      case symbol_kind::S_EQIF: // EQIF
      case symbol_kind::S_MINOP: // MINOP
      case symbol_kind::S_DIVOP: // DIVOP
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXQL: // EXQL
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_mainclass: // mainclass
      case symbol_kind::S_stringarr: // stringarr
      case symbol_kind::S_statementlist: // statementlist
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_expressionlist: // expressionlist
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_methoddeclaration: // methoddeclaration
      case symbol_kind::S_classdeclaration: // classdeclaration
      case symbol_kind::S_classdeclarationlist: // classdeclarationlist
      case symbol_kind::S_vardeclarationlist: // vardeclarationlist
      case symbol_kind::S_vardeclaration: // vardeclaration
      case symbol_kind::S_parameterlist: // parameterlist
      case symbol_kind::S_methoddeclarationlist: // methoddeclarationlist
      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_type: // type
        value.copy< Node * > (that.value);
        break;

      case symbol_kind::S_PLUSOP: // PLUSOP
      case symbol_kind::S_MINUSOP: // MINUSOP
      case symbol_kind::S_MULTOP: // MULTOP
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LEFTM: // LEFTM
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_LEFTP: // LEFTP
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_LEFTB: // LEFTB
      case symbol_kind::S_RIGHTB: // RIGHTB
      case symbol_kind::S_RIGHTP: // RIGHTP
      case symbol_kind::S_RIGHTM: // RIGHTM
      case symbol_kind::S_INTT: // INTT
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_SOP: // SOP
      case symbol_kind::S_SEMIC: // SEMIC
      case symbol_kind::S_EQOP: // EQOP
      case symbol_kind::S_ANDOP: // ANDOP
      case symbol_kind::S_OROP: // OROP
      case symbol_kind::S_LESSOP: // LESSOP
      case symbol_kind::S_MOREOP: // MOREOP
      case symbol_kind::S_EQIF: // EQIF
      case symbol_kind::S_MINOP: // MINOP
      case symbol_kind::S_DIVOP: // DIVOP
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXQL: // EXQL
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_mainclass: // mainclass
      case symbol_kind::S_stringarr: // stringarr
      case symbol_kind::S_statementlist: // statementlist
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_expressionlist: // expressionlist
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_methoddeclaration: // methoddeclaration
      case symbol_kind::S_classdeclaration: // classdeclaration
      case symbol_kind::S_classdeclarationlist: // classdeclarationlist
      case symbol_kind::S_vardeclarationlist: // vardeclarationlist
      case symbol_kind::S_vardeclaration: // vardeclaration
      case symbol_kind::S_parameterlist: // parameterlist
      case symbol_kind::S_methoddeclarationlist: // methoddeclarationlist
      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_type: // type
        value.move< Node * > (that.value);
        break;

      case symbol_kind::S_PLUSOP: // PLUSOP
      case symbol_kind::S_MINUSOP: // MINUSOP
      case symbol_kind::S_MULTOP: // MULTOP
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LEFTM: // LEFTM
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_LEFTP: // LEFTP
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_LEFTB: // LEFTB
      case symbol_kind::S_RIGHTB: // RIGHTB
      case symbol_kind::S_RIGHTP: // RIGHTP
      case symbol_kind::S_RIGHTM: // RIGHTM
      case symbol_kind::S_INTT: // INTT
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_SOP: // SOP
      case symbol_kind::S_SEMIC: // SEMIC
      case symbol_kind::S_EQOP: // EQOP
      case symbol_kind::S_ANDOP: // ANDOP
      case symbol_kind::S_OROP: // OROP
      case symbol_kind::S_LESSOP: // LESSOP
      case symbol_kind::S_MOREOP: // MOREOP
      case symbol_kind::S_EQIF: // EQIF
      case symbol_kind::S_MINOP: // MINOP
      case symbol_kind::S_DIVOP: // DIVOP
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXQL: // EXQL
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_mainclass: // mainclass
      case symbol_kind::S_stringarr: // stringarr
      case symbol_kind::S_statementlist: // statementlist
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_expressionlist: // expressionlist
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_methoddeclaration: // methoddeclaration
      case symbol_kind::S_classdeclaration: // classdeclaration
      case symbol_kind::S_classdeclarationlist: // classdeclarationlist
      case symbol_kind::S_vardeclarationlist: // vardeclarationlist
      case symbol_kind::S_vardeclaration: // vardeclaration
      case symbol_kind::S_parameterlist: // parameterlist
      case symbol_kind::S_methoddeclarationlist: // methoddeclarationlist
      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_type: // type
        yylhs.value.emplace< Node * > ();
        break;

      case symbol_kind::S_PLUSOP: // PLUSOP
      case symbol_kind::S_MINUSOP: // MINUSOP
      case symbol_kind::S_MULTOP: // MULTOP
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LEFTM: // LEFTM
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_LEFTP: // LEFTP
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_LEFTB: // LEFTB
      case symbol_kind::S_RIGHTB: // RIGHTB
      case symbol_kind::S_RIGHTP: // RIGHTP
      case symbol_kind::S_RIGHTM: // RIGHTM
      case symbol_kind::S_INTT: // INTT
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_SOP: // SOP
      case symbol_kind::S_SEMIC: // SEMIC
      case symbol_kind::S_EQOP: // EQOP
      case symbol_kind::S_ANDOP: // ANDOP
      case symbol_kind::S_OROP: // OROP
      case symbol_kind::S_LESSOP: // LESSOP
      case symbol_kind::S_MOREOP: // MOREOP
      case symbol_kind::S_EQIF: // EQIF
      case symbol_kind::S_MINOP: // MINOP
      case symbol_kind::S_DIVOP: // DIVOP
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXQL: // EXQL
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // goal: mainclass classdeclarationlist "end of file"
#line 38 "parser.yy"
                                        {yylhs.value.as < Node * > () = new Node("Goal", "");
	yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
	root = yylhs.value.as < Node * > ();


}
#line 835 "parser.tab.cc"
    break;

  case 3: // mainclass: CLASS identifier LEFTM PUBLIC STATIC VOID MAIN LEFTP stringarr RIGHTP LEFTM statement RIGHTM RIGHTM
#line 46 "parser.yy"
                                                                                                              {
	yylhs.value.as < Node * > () = new Node("MainClass", yystack_[12].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
}
#line 845 "parser.tab.cc"
    break;

  case 4: // stringarr: STRING LEFTB RIGHTB identifier
#line 52 "parser.yy"
                                         {
	yylhs.value.as < Node * > () = new Node("String[]", yystack_[0].value.as < Node * > ()->value);
}
#line 853 "parser.tab.cc"
    break;

  case 5: // statementlist: %empty
#line 56 "parser.yy"
               {yylhs.value.as < Node * > () = new Node("Statementlist","");}
#line 859 "parser.tab.cc"
    break;

  case 6: // statementlist: statement statementlist
#line 57 "parser.yy"
                                  {
		yylhs.value.as < Node * > () = yystack_[0].value.as < Node * > ();
	 	yylhs.value.as < Node * > ()->children.push_front(yystack_[1].value.as < Node * > ());
	 }
#line 868 "parser.tab.cc"
    break;

  case 7: // statement: LEFTM statementlist RIGHTM
#line 63 "parser.yy"
                                     {
	yylhs.value.as < Node * > () = new Node("Statement", "");
	yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
	}
#line 877 "parser.tab.cc"
    break;

  case 8: // statement: IF LEFTP expression RIGHTP statement ELSE statement
#line 67 "parser.yy"
                                                             {
		yylhs.value.as < Node * > () = new Node("Statement", "if");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
		}
#line 888 "parser.tab.cc"
    break;

  case 9: // statement: WHILE LEFTP expression RIGHTP statement
#line 73 "parser.yy"
                                                  {yylhs.value.as < Node * > () = new Node("Statement", "while"); yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ()); yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());}
#line 894 "parser.tab.cc"
    break;

  case 10: // statement: SOP LEFTP expression RIGHTP SEMIC
#line 74 "parser.yy"
                                            {yylhs.value.as < Node * > () = new Node("Statement", "sys.out"); yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());}
#line 900 "parser.tab.cc"
    break;

  case 11: // statement: identifier EQOP expression SEMIC
#line 75 "parser.yy"
                                           {yylhs.value.as < Node * > () = new Node("Statement assign", yystack_[3].value.as < Node * > ()->value); yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());}
#line 906 "parser.tab.cc"
    break;

  case 12: // statement: identifier LEFTB expression RIGHTB EQOP expression SEMIC
#line 76 "parser.yy"
                                                                   {yylhs.value.as < Node * > () = new Node("Statementlist assign", yystack_[6].value.as < Node * > ()->value); yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ()); yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());}
#line 912 "parser.tab.cc"
    break;

  case 13: // expressionlist: %empty
#line 79 "parser.yy"
                {yylhs.value.as < Node * > () = new Node("Empty","");}
#line 918 "parser.tab.cc"
    break;

  case 14: // expressionlist: expression COMMA expressionlist
#line 80 "parser.yy"
                                          {yylhs.value.as < Node * > () = new Node ("Expressionlist", "");
	 	yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
		
	 }
#line 928 "parser.tab.cc"
    break;

  case 15: // expressionlist: expression
#line 85 "parser.yy"
                     {yylhs.value.as < Node * > () = yystack_[0].value.as < Node * > ();}
#line 934 "parser.tab.cc"
    break;

  case 16: // expression: expression ANDOP expression
#line 88 "parser.yy"
                                        {
	yylhs.value.as < Node * > () = new Node("Expression", "and");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 944 "parser.tab.cc"
    break;

  case 17: // expression: expression OROP expression
#line 93 "parser.yy"
                                     {yylhs.value.as < Node * > () = new Node("Expression", "or");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 953 "parser.tab.cc"
    break;

  case 18: // expression: expression LESSOP expression
#line 97 "parser.yy"
                                       {yylhs.value.as < Node * > () = new Node("Expression", "less than");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 962 "parser.tab.cc"
    break;

  case 19: // expression: expression MOREOP expression
#line 101 "parser.yy"
                                       {yylhs.value.as < Node * > () = new Node("Expression", "larger");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 971 "parser.tab.cc"
    break;

  case 20: // expression: expression EQIF expression
#line 105 "parser.yy"
                                     {yylhs.value.as < Node * > () = new Node("Expression", "if equal");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 980 "parser.tab.cc"
    break;

  case 21: // expression: expression PLUSOP expression
#line 109 "parser.yy"
                                       {yylhs.value.as < Node * > () = new Node("Expression", "ADD");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 989 "parser.tab.cc"
    break;

  case 22: // expression: expression MINOP expression
#line 113 "parser.yy"
                                      {yylhs.value.as < Node * > () = new Node("Expression", "subtract");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 998 "parser.tab.cc"
    break;

  case 23: // expression: expression MULTOP expression
#line 117 "parser.yy"
                                       {yylhs.value.as < Node * > () = new Node("Expression", "multiplication");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 1007 "parser.tab.cc"
    break;

  case 24: // expression: expression DIVOP expression
#line 121 "parser.yy"
                                      {yylhs.value.as < Node * > () = new Node("Expression", "Divided");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	}
#line 1016 "parser.tab.cc"
    break;

  case 25: // expression: expression LEFTB expression RIGHTB
#line 126 "parser.yy"
                                            {
		yylhs.value.as < Node * > () = new Node("Expression()", "");
		yylhs.value.as < Node * > ()->children.push_back(yystack_[3].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
	}
#line 1026 "parser.tab.cc"
    break;

  case 26: // expression: expression DOT LENGTH
#line 131 "parser.yy"
                               {
		yylhs.value.as < Node * > () = new Node("Expression", "len");
		yylhs.value.as < Node * > () = yystack_[2].value.as < Node * > ();
	}
#line 1035 "parser.tab.cc"
    break;

  case 27: // expression: expression DOT identifier LEFTP expressionlist RIGHTP
#line 135 "parser.yy"
                                                               {
		yylhs.value.as < Node * > () = new Node("Expression list", yystack_[3].value.as < Node * > ()->value);
		yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
	}
#line 1045 "parser.tab.cc"
    break;

  case 28: // expression: expression DOT identifier LEFTP RIGHTP
#line 140 "parser.yy"
                                                {
		yylhs.value.as < Node * > () = new Node("Expression.identifier", yystack_[2].value.as < Node * > ()->value);
		yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
	}
#line 1054 "parser.tab.cc"
    break;

  case 29: // expression: INT
#line 144 "parser.yy"
             {yylhs.value.as < Node * > () = new Node("<INTEGER_LITERAL>", yystack_[0].value.as < std::string > ());}
#line 1060 "parser.tab.cc"
    break;

  case 30: // expression: TRUE
#line 145 "parser.yy"
              {yylhs.value.as < Node * > () = new Node("Expression", "TRUE");}
#line 1066 "parser.tab.cc"
    break;

  case 31: // expression: FALSE
#line 146 "parser.yy"
               {yylhs.value.as < Node * > () = new Node("Expression", "FALSE");}
#line 1072 "parser.tab.cc"
    break;

  case 32: // expression: identifier
#line 147 "parser.yy"
                    {yylhs.value.as < Node * > () = yystack_[0].value.as < Node * > ();}
#line 1078 "parser.tab.cc"
    break;

  case 33: // expression: THIS
#line 148 "parser.yy"
              {yylhs.value.as < Node * > () = new Node("Expression", "THIS");}
#line 1084 "parser.tab.cc"
    break;

  case 34: // expression: NEW INTT LEFTB expression RIGHTB
#line 149 "parser.yy"
                                          {yylhs.value.as < Node * > () = new Node("Expression", "NEW INT");yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());}
#line 1090 "parser.tab.cc"
    break;

  case 35: // expression: NEW identifier LEFTP RIGHTP
#line 150 "parser.yy"
                                     {yylhs.value.as < Node * > () = new Node("Expression new identifier", yystack_[2].value.as < Node * > ()->value);}
#line 1096 "parser.tab.cc"
    break;

  case 36: // expression: EXQL expression
#line 151 "parser.yy"
                         {yylhs.value.as < Node * > () = new Node("Expression", "NOT"); yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());}
#line 1102 "parser.tab.cc"
    break;

  case 37: // expression: LEFTP expression RIGHTP
#line 152 "parser.yy"
                                 {yylhs.value.as < Node * > () = new Node("Expression", "param"); yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());}
#line 1108 "parser.tab.cc"
    break;

  case 38: // methoddeclaration: PUBLIC type identifier LEFTP parameterlist RIGHTP LEFTM statementlist RETURN expression SEMIC RIGHTM
#line 155 "parser.yy"
                                                                                                                       {
	yylhs.value.as < Node * > () = new Node("MethodDeclaration param", yystack_[9].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[10].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[7].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
	}
#line 1120 "parser.tab.cc"
    break;

  case 39: // methoddeclaration: PUBLIC type identifier LEFTP parameterlist RIGHTP LEFTM vardeclarationlist statementlist RETURN expression SEMIC RIGHTM
#line 162 "parser.yy"
                                                                                                                                 {
		yylhs.value.as < Node * > () = new Node("MethodDeclaration param", yystack_[10].value.as < Node * > ()->value); 
		yylhs.value.as < Node * > ()->children.push_back(yystack_[11].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[8].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
	}
#line 1133 "parser.tab.cc"
    break;

  case 40: // methoddeclaration: PUBLIC type identifier LEFTP RIGHTP LEFTM vardeclarationlist statementlist RETURN expression SEMIC RIGHTM
#line 170 "parser.yy"
                                                                                                                    {
		yylhs.value.as < Node * > () = new Node("MethodDeclaration", yystack_[9].value.as < Node * > ()->value); 
		yylhs.value.as < Node * > ()->children.push_back(yystack_[10].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
	}
#line 1145 "parser.tab.cc"
    break;

  case 41: // methoddeclaration: PUBLIC type identifier LEFTP RIGHTP LEFTM statementlist RETURN expression SEMIC RIGHTM
#line 177 "parser.yy"
                                                                                                {
		yylhs.value.as < Node * > () = new Node("MethodDeclaration", yystack_[8].value.as < Node * > ()->value);
		yylhs.value.as < Node * > ()->children.push_back(yystack_[9].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
		yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ()); 
	}
#line 1156 "parser.tab.cc"
    break;

  case 42: // classdeclaration: CLASS identifier EXTENDS identifier LEFTM vardeclarationlist methoddeclarationlist RIGHTM
#line 185 "parser.yy"
                                                                                                           {
  yylhs.value.as < Node * > () = new Node("ClassDeclaration", yystack_[6].value.as < Node * > ()->value);
  yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
  yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
  yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
  
}
#line 1168 "parser.tab.cc"
    break;

  case 43: // classdeclaration: CLASS identifier EXTENDS identifier LEFTM methoddeclarationlist RIGHTM
#line 192 "parser.yy"
                                                                           {
    yylhs.value.as < Node * > () = new Node("ClassDeclaration", yystack_[5].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[3].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
  }
#line 1178 "parser.tab.cc"
    break;

  case 44: // classdeclaration: CLASS identifier LEFTM vardeclarationlist methoddeclarationlist RIGHTM
#line 197 "parser.yy"
                                                                          {
    yylhs.value.as < Node * > () = new Node("ClassDeclaration", yystack_[4].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
	yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
  
}
#line 1189 "parser.tab.cc"
    break;

  case 45: // classdeclaration: CLASS identifier LEFTM methoddeclarationlist RIGHTM
#line 203 "parser.yy"
                                                        {
    yylhs.value.as < Node * > () = new Node("ClassDeclaration", yystack_[3].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
  }
#line 1198 "parser.tab.cc"
    break;

  case 46: // classdeclarationlist: %empty
#line 211 "parser.yy"
                      {yylhs.value.as < Node * > () = new Node("Classdeclarationlist","");}
#line 1204 "parser.tab.cc"
    break;

  case 47: // classdeclarationlist: classdeclarationlist classdeclaration
#line 212 "parser.yy"
                                                {yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
	 	yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	 }
#line 1212 "parser.tab.cc"
    break;

  case 48: // vardeclarationlist: %empty
#line 216 "parser.yy"
                    {yylhs.value.as < Node * > () = new Node("Vardeclarationlist","");}
#line 1218 "parser.tab.cc"
    break;

  case 49: // vardeclarationlist: vardeclarationlist vardeclaration
#line 217 "parser.yy"
                                            {yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
	 	yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	 }
#line 1226 "parser.tab.cc"
    break;

  case 50: // vardeclaration: type identifier SEMIC
#line 223 "parser.yy"
                                      {
	yylhs.value.as < Node * > () = new Node("VarDeclaration", yystack_[1].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
	}
#line 1235 "parser.tab.cc"
    break;

  case 51: // parameterlist: type identifier
#line 232 "parser.yy"
                               {
	yylhs.value.as < Node * > () = new Node("parameter list", yystack_[0].value.as < Node * > ()->value);
	yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
	}
#line 1244 "parser.tab.cc"
    break;

  case 52: // parameterlist: type identifier COMMA parameterlist
#line 236 "parser.yy"
                                       {
      yylhs.value.as < Node * > () = new Node("parameterlist", yystack_[2].value.as < Node * > ()->value);
      yylhs.value.as < Node * > ()->children.push_back(yystack_[3].value.as < Node * > ());
      yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());

  }
#line 1255 "parser.tab.cc"
    break;

  case 53: // methoddeclarationlist: %empty
#line 245 "parser.yy"
                       {yylhs.value.as < Node * > () = new Node("MethodDeclarationlist","");}
#line 1261 "parser.tab.cc"
    break;

  case 54: // methoddeclarationlist: methoddeclarationlist methoddeclaration
#line 246 "parser.yy"
                                                  {
		yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
	 	yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
	 }
#line 1270 "parser.tab.cc"
    break;

  case 55: // identifier: IDENTIFIER
#line 254 "parser.yy"
                       {yylhs.value.as < Node * > () = new Node("identifier", yystack_[0].value.as < std::string > ());}
#line 1276 "parser.tab.cc"
    break;

  case 56: // type: INTT LEFTB RIGHTB
#line 256 "parser.yy"
                        {
	yylhs.value.as < Node * > () = new Node("Int[]", "");
	}
#line 1284 "parser.tab.cc"
    break;

  case 57: // type: BOOL
#line 259 "parser.yy"
              {
		yylhs.value.as < Node * > () = new Node("boolean", "");
	}
#line 1292 "parser.tab.cc"
    break;

  case 58: // type: INTT
#line 262 "parser.yy"
              {
		yylhs.value.as < Node * > () = new Node("<INTEGER_LITERAL>", "");
	}
#line 1300 "parser.tab.cc"
    break;

  case 59: // type: identifier
#line 265 "parser.yy"
                    {yylhs.value.as < Node * > () = yystack_[0].value.as < Node * > ();}
#line 1306 "parser.tab.cc"
    break;


#line 1310 "parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -55;

  const signed char parser::yytable_ninf_ = -6;

  const short
  parser::yypact_[] =
  {
       3,    17,    37,   -55,   -55,    42,   -55,    22,    51,   -55,
      17,   -55,    58,    -3,    55,   -55,    17,    72,    86,    -6,
      62,    87,   -55,    91,   -55,    67,   -55,    17,    86,   -55,
     -55,   -55,    88,    97,   -55,    82,    17,    86,    90,   102,
     108,   -55,   -55,   120,    92,   -55,   121,   130,   122,   -55,
      17,   461,   132,   125,    17,   -55,   461,   131,   134,   136,
     127,    43,     8,   135,   116,   137,   461,    -2,    -2,    -2,
     140,    -2,    -2,   119,   442,     8,    86,   -55,   -55,   -55,
      -2,   -55,   -55,   -55,    56,    -2,   133,   -55,   156,   176,
     -55,   195,   214,    -2,   138,    43,   141,   442,   -55,   234,
     139,   154,    31,    -2,    -2,    -2,   461,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    20,   461,   143,   144,   -55,   253,
      -2,    -2,   142,   -55,    -2,   157,    41,    31,   272,   158,
     424,   405,    94,    94,   443,    41,    31,   -55,   165,   -55,
     -55,    -2,   163,   291,   310,    -2,   329,   -55,   -55,   461,
      48,   348,   -55,   164,   172,   367,   -55,   -55,   -55,   177,
     386,   -55,   -55,   -55,   179,   -55,    -2,   -55,   -55
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     0,    46,    55,     0,     1,     0,     0,     2,
       0,    47,     0,     0,     0,    48,     0,     0,    53,     0,
       0,     0,    57,    58,    49,     0,    59,     0,     0,    45,
      54,    48,     0,     0,    44,     0,     0,    53,     0,     0,
       0,    56,    50,     0,     0,    43,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     0,    48,     0,    51,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     5,    48,     0,     7,     6,    29,
       0,    30,    31,    33,     0,     0,     0,    32,     0,     0,
       3,     0,     0,     0,     0,    59,     0,     5,    52,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,    37,     0,     0,    21,    23,     0,     0,
      16,    17,    18,    19,    20,    22,    24,    26,     0,     9,
      10,     0,     0,     0,     0,     0,     0,    35,    25,     0,
       0,     0,    41,     0,     0,     0,    34,     8,    28,     0,
      15,    12,    40,    38,     0,    27,    13,    39,    14
  };

  const signed char
  parser::yypgoto_[] =
  {
     -55,   -55,   -55,   -55,   -54,   -49,    35,    13,   -55,   -55,
     -55,   -30,   -55,   126,    -7,    -1,   -25
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     2,     3,    40,    65,    66,   159,   160,    30,    11,
       7,    18,    24,    53,    19,    87,    27
  };

  const short
  parser::yytable_[] =
  {
       5,    37,    60,    36,    79,    28,     4,    15,    73,    13,
       1,    25,    78,    80,    29,    20,     4,    26,    56,    16,
      94,    96,     9,    54,    38,     4,    35,    26,     4,    10,
      44,    57,    74,    58,    59,    43,    26,     6,    81,    82,
      83,    84,    85,   122,    -5,    97,   104,    26,   105,    55,
      61,    54,     8,    64,    79,    61,     4,   129,   105,   137,
      71,    61,    12,    80,     4,    61,   139,   158,    17,   114,
      14,    72,    31,    95,    61,    26,   113,   100,    28,   114,
      86,    88,    89,   101,    91,    92,    21,    34,    81,    82,
      83,    84,    85,    99,     4,    22,    95,   103,   102,   104,
     157,    28,    32,    28,    39,    61,   119,    23,    33,    42,
      45,   105,    49,   138,    61,    41,   126,   127,   128,    46,
     130,   131,   132,   133,   134,   135,   136,    47,   112,   113,
       4,    22,   114,   143,   144,    48,   103,   146,   104,    50,
      51,    52,    62,    23,    63,    75,    67,    70,    61,    68,
     105,    69,   106,    76,   151,    93,   124,    77,   155,   103,
      90,   104,   107,   108,   109,   110,   111,   112,   113,   125,
     140,   114,   141,   105,   120,   115,   147,   121,   145,   103,
     150,   104,   149,   152,   162,   107,   108,   109,   110,   111,
     112,   113,   163,   105,   114,   116,   165,     0,   103,   167,
     104,   168,    98,     0,     0,   107,   108,   109,   110,   111,
     112,   113,   105,   117,   114,     0,     0,   103,     0,   104,
       0,     0,     0,     0,   107,   108,   109,   110,   111,   112,
     113,   105,     0,   114,     0,     0,     0,   103,     0,   104,
       0,   118,     0,   107,   108,   109,   110,   111,   112,   113,
       0,   105,   114,   123,     0,     0,   103,     0,   104,     0,
       0,     0,     0,   107,   108,   109,   110,   111,   112,   113,
     105,     0,   114,     0,     0,   103,     0,   104,     0,     0,
     142,     0,   107,   108,   109,   110,   111,   112,   113,   105,
     148,   114,     0,     0,   103,     0,   104,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   113,   105,     0,
     114,     0,     0,   103,     0,   104,     0,     0,   153,     0,
     107,   108,   109,   110,   111,   112,   113,   105,     0,   114,
       0,     0,   103,     0,   104,     0,     0,   154,     0,   107,
     108,   109,   110,   111,   112,   113,   105,   156,   114,     0,
       0,   103,     0,   104,     0,     0,     0,     0,   107,   108,
     109,   110,   111,   112,   113,   105,     0,   114,     0,     0,
     103,     0,   104,     0,     0,   161,     0,   107,   108,   109,
     110,   111,   112,   113,   105,     0,   114,     0,     0,   103,
       0,   104,     0,     0,   164,     0,   107,   108,   109,   110,
     111,   112,   113,   105,     0,   114,     0,     0,   103,     0,
     104,     0,     0,     0,     0,   107,   108,   109,   110,   111,
     112,   113,   105,   166,   114,     0,     0,   103,     0,   104,
       0,     0,     0,     0,   107,     0,   109,   110,   111,   112,
     113,   105,     0,   114,     0,     0,   103,     0,   104,     0,
       4,    22,    56,     0,     0,   109,   110,   111,   112,   113,
     105,     0,   114,    23,     0,    57,     0,    58,    59,     4,
       0,    56,     0,     0,   109,   110,     0,   112,   113,     0,
       0,   114,     0,     0,    57,     0,    58,    59
  };

  const short
  parser::yycheck_[] =
  {
       1,    31,    51,    28,     6,    11,     8,    10,    62,    10,
       7,    18,    66,    15,    20,    16,     8,    18,    10,    22,
      74,    75,     0,    48,    31,     8,    27,    28,     8,     7,
      37,    23,    62,    25,    26,    36,    37,     0,    40,    41,
      42,    43,    44,    97,    36,    75,     5,    48,    17,    50,
      51,    76,    10,    54,     6,    56,     8,   106,    17,    39,
      17,    62,    11,    15,     8,    66,   115,    19,    13,    38,
      12,    28,    10,    74,    75,    76,    35,    21,    11,    38,
      67,    68,    69,    84,    71,    72,    14,    20,    40,    41,
      42,    43,    44,    80,     8,     9,    97,     3,    85,     5,
     149,    11,    15,    11,    16,   106,    93,    21,    17,    27,
      20,    17,    20,   114,   115,    18,   103,   104,   105,    17,
     107,   108,   109,   110,   111,   112,   113,    19,    34,    35,
       8,     9,    38,   120,   121,    15,     3,   124,     5,    18,
      10,    19,    10,    21,    19,    10,    15,    20,   149,    15,
      17,    15,    19,    37,   141,    36,    17,    20,   145,     3,
      20,     5,    29,    30,    31,    32,    33,    34,    35,    15,
      27,    38,    28,    17,    36,    19,    19,    36,    36,     3,
      15,     5,    24,    20,    20,    29,    30,    31,    32,    33,
      34,    35,    20,    17,    38,    19,    19,    -1,     3,    20,
       5,   166,    76,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    17,    18,    38,    -1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    17,    -1,    38,    -1,    -1,    -1,     3,    -1,     5,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      -1,    17,    38,    19,    -1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      17,    -1,    38,    -1,    -1,     3,    -1,     5,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    17,
      18,    38,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    17,    -1,
      38,    -1,    -1,     3,    -1,     5,    -1,    -1,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    17,    -1,    38,
      -1,    -1,     3,    -1,     5,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    17,    18,    38,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    17,    -1,    38,    -1,    -1,
       3,    -1,     5,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    17,    -1,    38,    -1,    -1,     3,
      -1,     5,    -1,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    17,    -1,    38,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    17,    37,    38,    -1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    17,    -1,    38,    -1,    -1,     3,    -1,     5,    -1,
       8,     9,    10,    -1,    -1,    31,    32,    33,    34,    35,
      17,    -1,    38,    21,    -1,    23,    -1,    25,    26,     8,
      -1,    10,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      -1,    38,    -1,    -1,    23,    -1,    25,    26
  };

  const signed char
  parser::yystos_[] =
  {
       0,     7,    46,    47,     8,    60,     0,    55,    10,     0,
       7,    54,    11,    60,    12,    10,    22,    13,    56,    59,
      60,    14,     9,    21,    57,    59,    60,    61,    11,    20,
      53,    10,    15,    17,    20,    60,    61,    56,    59,    16,
      48,    18,    27,    60,    59,    20,    17,    19,    15,    20,
      18,    10,    19,    58,    61,    60,    10,    23,    25,    26,
      50,    60,    10,    19,    60,    49,    50,    15,    15,    15,
      20,    17,    28,    49,    56,    10,    37,    20,    49,     6,
      15,    40,    41,    42,    43,    44,    52,    60,    52,    52,
      20,    52,    52,    36,    49,    60,    49,    56,    58,    52,
      21,    60,    52,     3,     5,    17,    19,    29,    30,    31,
      32,    33,    34,    35,    38,    19,    19,    18,    27,    52,
      36,    36,    49,    19,    17,    15,    52,    52,    52,    50,
      52,    52,    52,    52,    52,    52,    52,    39,    60,    50,
      27,    28,    27,    52,    52,    36,    52,    19,    18,    24,
      15,    52,    20,    27,    27,    52,    18,    50,    19,    51,
      52,    27,    20,    20,    27,    19,    37,    20,    51
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    45,    46,    47,    48,    49,    49,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    54,    54,    54,    54,    55,    55,    56,    56,
      57,    58,    58,    59,    59,    60,    61,    61,    61,    61
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     3,    14,     4,     0,     2,     3,     7,     5,
       5,     4,     7,     0,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     6,     5,     1,
       1,     1,     1,     1,     5,     4,     2,     3,    12,    13,
      12,    11,     8,     7,     6,     5,     0,     2,     0,     2,
       3,     2,     4,     0,     2,     1,     3,     1,     1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "PLUSOP", "MINUSOP",
  "MULTOP", "INT", "CLASS", "IDENTIFIER", "BOOL", "LEFTM", "PUBLIC",
  "STATIC", "VOID", "MAIN", "LEFTP", "STRING", "LEFTB", "RIGHTB", "RIGHTP",
  "RIGHTM", "INTT", "EXTENDS", "IF", "ELSE", "WHILE", "SOP", "SEMIC",
  "EQOP", "ANDOP", "OROP", "LESSOP", "MOREOP", "EQIF", "MINOP", "DIVOP",
  "RETURN", "COMMA", "DOT", "LENGTH", "TRUE", "FALSE", "THIS", "NEW",
  "EXQL", "$accept", "goal", "mainclass", "stringarr", "statementlist",
  "statement", "expressionlist", "expression", "methoddeclaration",
  "classdeclaration", "classdeclarationlist", "vardeclarationlist",
  "vardeclaration", "parameterlist", "methoddeclarationlist", "identifier",
  "type", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    38,    38,    46,    52,    56,    57,    63,    67,    73,
      74,    75,    76,    79,    80,    85,    88,    93,    97,   101,
     105,   109,   113,   117,   121,   126,   131,   135,   140,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   155,   162,
     170,   177,   185,   192,   197,   203,   211,   212,   216,   217,
     223,   232,   236,   245,   246,   254,   256,   259,   262,   265
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1935 "parser.tab.cc"

