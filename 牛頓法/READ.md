# 牛頓法的推導

## 泰勒展開

$f(x) \ =  \ a_0 + a_1 x + a_2 x^2 + ... $
$以x = x_i 為中心展開 $

$f(x) \ =  \ f(x_i) + f'(x_i) * (x - x_i) + \frac{f''(x_i)}{2} * (x - x_i)^2 + ...$

取一次近似值

$f(x) \approx f(x_i) + f'(x_i) * (x - x_i) \ = \ 0  \quad  \Rightarrow  \quad  x - x_i = \frac{-f(x_i)}{f'(x_i)} $

$\Rightarrow x_{i+1}\ = \ x_i - \frac{f(x_i)}{f'(x_i)} \quad 結合 \quad g(x) \=\ x - \frac{f(x)}{f'(x)} \quad為迭代式$

$Ex \quad x^2 - 3 = 0 \quad \Rightarrow \quad g(x) = x - \frac{f(x)}{f'(x)} \quad =  \quad  x - \frac{x^2-3}{2x} \quad = \quad  x - \frac{x}{2} + \frac{3}{2x} \quad = \quad \frac{1}{2}(x + \frac{3}{x})$

## 牛頓法的收斂條件
$在解答附近|g'(x)<1|$
