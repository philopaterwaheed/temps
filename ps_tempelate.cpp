#include<iostream>
#include<string>
#include <algorithm>
#include <bits/stdc++.h>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <memory>
int max = INT_MIN , min = INT_MAX;
namespace philo{
  template <typename T >
  T * max (T x , T y )
    {
      return (x>y) ? &x :&y ;
    }
}
#define p(x) std :: cout << x 
#define sp(x) for(auto c : x ) std :: cout << c << "\n"
#define dec(type, ...) \
    type __VA_ARGS__; \
    InputValues(__VA_ARGS__); 
template<typename... Args>
void InputValues(Args&... args)
{
    ((std::cin >> args), ...);
}
#define array(type , name ,n ) type* name = new type[n];\
for (int i =0 ; i < n ; i++)\
std :: cin >> name[i]; 
template <typename T >
class philo_vector{
int type = 0;
std::vector <T> v1; std::set<T> v2 ; std::queue <T> v3 ; 
public :
};

template<typename T>
std :: ostream &operator<< (std :: ostream& os, philo_vector<T> v );
int main () { 
/*
         .m.                                   ,_
         ' ;M;                                ,;m `
           ;M;.           ,      ,           ;SMM;
          ;;Mm;         ,;  ____  ;,         ;SMM;
         ;;;MM;        ; (.MMMMMM.) ;       ,SSMM;;
       ,;;;mMp'        l  ';mmmm;/  j       SSSMM;;
     .;;;;;MM;         .\,.mmSSSm,,/,      ,SSSMM;;;
    ;;;;;;mMM;        .;MMmSSSSSSSmMm;     ;MSSMM;;;;
   ;;;;;;mMSM;     ,_ ;MMmS;;;;;;mmmM;  -,;MMMMMMm;;;;
  ;;;;;;;MMSMM;     \"*;M;( ( '') );m;*"/ ;MMMMMM;;;;;,
 .;;;;;;mMMSMM;      \(@;! _     _ !;@)/ ;MMMMMMMM;;;;;,
 ;;;;;;;MMSSSM;       ;,;.*O*   *O*.;m; ;MMMMMMMMM;;;;;;,
.;;;;;;;MMSSSMM;     ;Mm;    |      ;M;,MMMMMMMMMMm;;;;;;.
;;;;;;;mmMSSSMMMM,   ;Mm;,   '-    ,;M;MMMMMMMSMMMMm;;;;;;;
;;;;;;;MMMSSSMMMMMMMm;Mm;;, \__/  ,;SmM;MMMMMMSSMMMM;;;;;;;;
;;'";;;MMMSSSSMMMMMM;MMmS;;,  "  ,;SmMM;MMMMMMSSMMMM;;;;;;;;.
!   ;;;MMMSSSSSMMMMM;MMMmSS;;._.;;SSmMM;MMMMMMSSMMMM;;;;;;;;;
    ;;;;*MSSSSSSMMMP;Mm*"'q;'   `;p*"*M;MMMMMSSSSMMM;;;;;;;;;
    ';;;  ;SS*SSM*M;M;'     `-.        ;;MMMMSSSSSMM;;;;;;;;;,
     ;;;. ;P  `q; qMM.                 ';MMMMSSSSSMp' ';;;;;;;
     ;;;; ',    ; .mm!     \.   `.   /  ;MMM' `qSS'    ';;;;;;
     ';;;       ' mmS';     ;     ,  `. ;'M'   `S       ';;;;;
      `;;.        mS;;`;    ;     ;    ;M,!     '  luk   ';;;;
       ';;       .mS;;, ;   '. o  ;   oMM;                ;;;;
        ';;      MMmS;; `,   ;._.' -_.'MM;                 ;;;
         `;;     MMmS;;; ;   ;      ;  MM;                 ;;;
           `'.   'MMmS;; `;) ',    .' ,M;'                 ;;;
              \    '' ''; ;   ;    ;  ;'                   ;;
               ;        ; `,  ;    ;  ;                   ;;
                        |. ;  ; (. ;  ;      _.-.         ;;
           .-----..__  /   ;  ;   ;' ;\  _.-" .- `.      ;;
         ;' ___      `*;   `; ';  ;  ; ;'  .-'    :      ;
         ;     """*-.   `.  ;  ;  ;  ; ' ,'      /       |
         ',          `-_    (.--',`--'..'      .'        ',
           `-_          `*-._'.\\\;||\\)     ,'
              `"*-._        "*`-ll_ll'l    ,'
                 ,==;*-._           "-.  .'
              _-'    "*-=`*;-._        ;'
            ."            ;'  ;"*-.    `
            ;   ____      ;//'     "-   `,
            `+   .-/                 ".\\;
              `*" /     
*/

    int t = 1;
    //std::cin>>t ;
    while (t--) 
    {
    }
}
/*
              {{{}}}}}}.
             {{{{{}}}}}}}.
            {{{{  {{{{{}}}}
           }}}}} _   _ {{{{{
           }}}}  0   0  }}}}}
          {{{{C    ^    {{{{{
         }}}}}}\  '-'  /}}}}}}
        {{{{{{{{;.___.;{{{{{{{{
 _      }}}}}}}}})   (}}}}}}}}}}
|\\   {{{{{}{{{) :   :{{{{{{{{{{{.
\\\\(\}}}}/       `@`  {{{}}}}}}}}}}.
 \ ( /{{{/ .CWWWO. _ .CWWW{{{{{{{. {{{
  `\ \{{/  CWWWWWO'_'CWWWWWO}}\}}}}  }}
   }\ \/  /'CWWWO'   'CWWW{{{{{\{{{{  {
  {{{\   /{{{{\         /}}}}}} \{{{}}
  }}}}\_/}}}}}}\       /{{{{{{{{ \{{{{{{
 {{{{{{{{{{{{{{{)     (}}}}}}}}}\ \}}}}}}
  }}}}}}}}}}} }/       \}{{{{{{{{\ \{{{{
 {{{{{{{{{{{{{/    o    \{{{{{{{{`\ '-.
  }}}} }}}}}.V.         .V.}}{{{  )/\\\\
  {{{  {{{{.CWWV.     .VWWO.{ }}}    `\\\
   }}  }}} CWWWWWWV.VWWWWWWO}} {{{     `"`
   {  {{   CWWWWWWWVWWWWWWWO{   }} 
        }} CWWWWWWWWWWWWWWWO}}  { 
        {  CWWWWWWWWWWWWWWWO {
           'CWWWWWWWWWWWWWO'
            'CWWWWWWWWWWWO'
             'CWWWWWWWWWO'
              'CWWWWWWWO'
               ;CWWWWWO.
               CWWWWWWWO
               CWWWWWWWO
               CWWWWWWWO
philo UWU      'CWWWWWO'
                'CWAWO'
                .CMAMO.
               .CMAAAMO.
             .CMAIMAMIAMO.
           .CMAAIMAAAMIAAMO.
         .CMMAAIIAAZAAIIAAMMO.
        .CMAAAIIAAZ.ZAAIIAAAMO.
        CMAAIIIAAZ...ZAAIIIAAMO
        CAAIIIIAZ.. ..ZAIIIIAAO
        'CAIIIAZ..   ..ZAIIIAO'
         'CIIIZ..     ..ZIIIO'
          'CIIZ...   ...ZIIO'
           'CIZZ... ...ZZIO'
            'CIZ..   ..ZIO'
             'V..     ..V'
              Y'       'Y
              '         '
*/
template<typename T>
std :: ostream &operator<< (std :: ostream& os, philo_vector<T> v )
{

for (auto & c : v.v  )
    os<<c<<v.sperator;
    return os ;
}