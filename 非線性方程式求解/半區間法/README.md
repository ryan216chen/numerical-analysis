# 半區間法

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



# 假位法

$與半區間法條件差不多，只是收斂方式是把兩點連成一直線，找這條線與x軸交點$

$從(a,f(a))、(b,f(b))這兩點開始$

$直線方程式: y = f(a) + \frac{f(b)-f(a)}{b-a}(x-a)，設y=0 \quad \Rightarrow \quad x - a = \frac{-(b-a)}{f(b)-f(a)} * f(a)$

$\Rightarrow x = a - \frac{b-a}{f(b)-f(a)}*f(a)$

$f(a)*(fx)<0 \quad \Rightarrow \quad a = x$

$f(a)*f(x) > 0 \quad \Rightarrow \quad b = x$

$缺點:一邊會一直不動\rightarrow收斂變慢$