李青航 SA22225226
1. No.1Which of these sentences are propositions? What are the truth values of those that are propositions?
i. Nanjing  is the capital of Jiangsu .
ii. Chongqing is the capital of Sichuan .


iii. $2 + 3 = 5$ 
iv. $5 + 7 = 10.$ 
v. $x + 2 = 11.$
vi. Answer this question.
vii. $x + y = y + x$ for every pair of real number $x$ and $y$.
[Sol.]    The propositions are:
$\qquad$ i.    ii.     iii.       iv.      vii
$\qquad$ Truth value:
$\qquad$ i. iii. vii.

2. No.4(Rosen, 2003, pp.26-28:1) Use truth tables to verify these equivalences.
i. $p \wedge T\equiv  p$
$$
\begin{array}
    {c|c}
\hline
{p} & {p \wedge T}\\
\hline
{T} & {T}\\
\hline
{F} & {F} \\
\end{array}
$$

$\qquad$ ii. $p \vee F \equiv p$
$$
\begin{array}
    {c|c}
\hline
{p} & {p \vee F}\\
\hline
{T} & {T}\\
\hline
{F} & {F} \\
\end{array}
$$


$\qquad$ iii. $p \wedge F \equiv F$
$$
\begin{array}
    {c|c}
\hline
{p} & {p \wedge F}\\
\hline
{T} & {F}\\
\hline
{F} & {F} \\
\end{array}
$$

$\qquad$iv. $p \vee T \equiv T$
$$
\begin{array}
    {c|c}
\hline
{p} & {p \vee T}\\
\hline
{T} & {T}\\
\hline
{F} & {T} \\
\end{array}
$$

$\qquad$v. $p \vee p\equiv  p$
$$
\begin{array}
    {c|c}
\hline
{p} & {p \vee p}\\
\hline
{T} & {T}\\
\hline
{F} & {F} \\
\end{array}
$$

$\qquad$vi. $p \wedge p\equiv p$
$$
\begin{array}
    {c|c}
\hline
{p} & {p \wedge p}\\
\hline
{T} & {T}\\
\hline
{F} & {F} \\
\end{array}
$$

3. No.7 (Rosen, 2003, pp.26-28:4) Use truth table to verify the associative laws
i.  $(p\vee q)\vee r\equiv p\vee(q\vee r)$
$$
\begin{array}{c|c|c|c|c}
\hline
{p} & {q}  & {r} & {(p\vee q)\vee r} & {p\vee(q\vee r)} \\
\hline
{T} & {T} & {T} & {T} & {T}\\
\hline
{T} & {F} & {T} & {T}  & {T} \\
\hline
{F} & {T} & {T} & {T}  & {T}\\
\hline
{F} & {F} & {T} & {T}  & {T} \\
\hline
{T} & {T} & {F} & {T} & {T}\\
\hline
{T} & {F} & {F} & {T}  & {T} \\
\hline
{F} & {T} & {F} & {T}  & {T}\\
\hline
{F} & {F} & {F} & {F}  & {F} \\
\hline
\end{array}
$$
ii. $(p\wedge q)\wedge r \equiv p\wedge (q\wedge r)$
$$
\begin{array}{c|c|c|c|c}
\hline
{p} & {q}  & {r} & {(p\wedge q)\wedge r} & {p\wedge(q\wedge r)} \\
\hline
{T} & {T} & {T} & {T} & {T}\\
\hline
{T} & {F} & {T} & {F}  & {F} \\
\hline
{F} & {T} & {T} & {F}  & {F}\\
\hline
{F} & {F} & {T} & {F}  & {F} \\
\hline
{T} & {T} & {F} & {F} & {F}\\
\hline
{T} & {F} & {F} & {F}  & {F} \\
\hline
{F} & {T} & {F} & {F}  & {F}\\
\hline
{F} & {F} & {F} & {F}  & {F} \\
\hline
\end{array}
$$
4. No.10 Show that each of these implications is a tautology by using truth tables.
i. $(p\wedge q) \rightarrow q$
$$
\begin{array}{c|c|c}
\hline
{p} & {q}  & {(p\wedge q) \rightarrow q}  \\
\hline
{T} & {T}  & {T}\\
\hline
{T} & {F}  & {T}  \\
\hline
{F} & {T}  & {T}\\
\hline
{F} & {F}  & {T}  \\
\end{array}
$$
$\qquad$ii. $p\rightarrow (p\vee q)$
$$
\begin{array}{c|c|c|c}
\hline
{p} & {q}  & {(p\vee q) }  & {p\rightarrow (p\vee q) }\\
\hline
{T} & {T}  & {T}& {T }\\
\hline
{T} & {F}  & {T} & {T } \\
\hline
{F} & {T}  & {T}& {T }\\
\hline
{F} & {F}  & {F} & {T } \\
\end{array}
$$

$\qquad$iii. $\neg p \rightarrow(p \rightarrow q)$
$$
\begin{array}{c|c|c|c}
\hline
{p} & {q}  & {p\rightarrow q }  & {\neg p \rightarrow(p \rightarrow q)}\\
\hline
{T} & {T}  & {T}& {T }\\
\hline
{T} & {F}  & {F} & {T } \\
\hline
{F} & {T}  & {T}& {T }\\
\hline
{F} & {F}  & {T} & {T } \\
\end{array}
$$

$\qquad$iv. $(p\wedge q) \rightarrow (p\rightarrow q)$
$$
\begin{array}{c|c|c|c|c}
\hline
{p} & {q}  & {p\wedge q } & {p\rightarrow q }  & {\neg p \rightarrow(p \rightarrow q)}\\
\hline
{T} & {T} & {F} & {T}& {T }\\
\hline
{T} & {F}  & {F}& {F} & {T } \\
\hline
{F} & {T}  & {F}& {T}& {T }\\
\hline
{F} & {F} & {F}& {T} & {T } \\
\end{array}
$$

$\qquad$v. $\neg(p\rightarrow q)\rightarrow p$
$$
\begin{array}{c|c|c|c}
\hline
{p} & {q}   & {p\rightarrow q }  & {\neg(p\rightarrow q)\rightarrow p}\\
\hline
{T} & {T} & {T}& {T }\\
\hline
{T} & {F} & {F} & {T } \\
\hline
{F} & {T}  & {T}& {T }\\
\hline
{F} & {F} & {T} & {T } \\
\end{array}
$$

$\qquad$vi. $\neg (p\rightarrow q)\rightarrow \neg q$
$$
\begin{array}{c|c|c|c|c}
\hline
{p} & {q}   & {p\rightarrow q }  & {\neg(p\rightarrow q)}& {\neg(p\rightarrow q)\rightarrow \neg q}\\
\hline
{T} & {T} & {T}& {F }& {T }\\
\hline
{T} & {F} & {F} & {T }& {T } \\
\hline
{F} & {T}  & {T}& {F }& {T }\\
\hline
{F} & {F} & {T} & {F }& {T } \\
\end{array}
$$