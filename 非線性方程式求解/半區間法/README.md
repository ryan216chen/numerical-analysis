# 半區間法 Bisection

$若已知f(a)*f(b)<0 ，且f(x)為連續的，則知在a、b之間至少存在一解答。$

## 中間值定理

$\Rightarrow猜測a,b的中間值\frac{a+b}{2}為下一次的猜測值，$
$x = g(x) = \frac{a+b}{2}$


### 三種結果
$f(c)*f(a) > 0 \quad \Rightarrow \quad a和c同號，故a = c縮小一半可能區間$

$f(c)*f(c) = 0 \quad \Rightarrow \quad c為解答 \rightarrow return c;$

$f(c)*f(a) < 0 \quad \Rightarrow \quad a和c異號，故b = c縮小一半可能區間$

$1. 必須永遠記得f(a)的正負符號$

$2. 迭代n次\Rightarrow範圍為\frac{1}{2^n}$

$3.永遠收斂$



# 假位法 False Position

$與半區間法條件差不多，只是收斂方式是把兩點連成一直線，找這條線與x軸交點$

$從(a,f(a))、(b,f(b))這兩點開始$

$直線方程式: y = f(a) + \frac{f(b)-f(a)}{b-a}(x-a)，設y=0 \quad \Rightarrow \quad x - a = \frac{-(b-a)}{f(b)-f(a)} * f(a)$

$\Rightarrow x = a - \frac{b-a}{f(b)-f(a)}*f(a)$

$f(a)*(fx)<0 \quad \Rightarrow \quad a = x$

$f(a)*f(x) > 0 \quad \Rightarrow \quad b = x$

$缺點:一邊會一直不動\rightarrow收斂變慢$

# 割線法 Secant line method

$假設有兩點(x_0,f(x_0))、(x_1,f(x_1))，連成一條直線，找與x軸的交點$

$與假位法不同的是，假位法利用中間值定理，區間會逐漸收斂，而割線法則是把兩點都往更新的root去更新$

$斜率m = \frac{fx_1 - fx_0}{x_1 - x_0}，根據上面假位法推導的公式，x = a - \frac{b-a}{f(b)-f(a)}*f(a)\quad \Rightarrow  \quad x_2 = x_0 - \frac{x_1-x_0}{fx_1-fx_0}*fx_0$

$然後更新x_0 = x_1，fx_0 = fx_1，x_1 = x_2，fx_1 = fx_2$

$割線法不保證root一定在中間，所以有可能會有發散的情況$

$收斂速度比假位法快$