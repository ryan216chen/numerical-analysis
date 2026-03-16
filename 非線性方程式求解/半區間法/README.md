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
