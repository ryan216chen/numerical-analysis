# 數值積分法 Numerical Integration 

數值積分取樣權重組合求近似值

$\int_a^b f(x)\,dx \approx \sum_{i=0}^{N} w_i f(x_i)$

## 梯形法

$f(x) \approx \frac{h}{2} \left(f(x_0) +f(x_1)\right)，h為|a-b|$

$梯形法在f(x)介於[a,b]之間之圖形為直線(即f(x)為一次多項式)時，是正確解答$
$，若f(X)在x\in[a,b]之圖形不是直線，則僅為近似解。$

 $I = I^* + c_2h^2 + c_4h^4+c_6h^6...，其中c_2、c_4、c_6為與函數f(x)相關的係數，和h無關。$

 $\quad$

$故減少h可以減小誤差，error大約正比於h^2$

$通常將積分[a,b]範圍分為N等分 \quad \Rightarrow \quad h = \frac{b-a}{N}$

$x_0 = a \quad \rightarrow \quad f_0 = f(x_0) \quad , \quad x_1 = a+1h \quad \rightarrow \quad f_1 = f(x_1)  \quad... $

$x_i = a + ih \quad \rightarrow \quad f_i = f(x_i) \quad ... \quad x_N = a +Nh \quad \rightarrow \quad f_N =f(x_N)$ 

$與一等分的近似積分$

$\int_a^b f(x)\,dx  =   \int_a^{a+h}f(x)\,dx  +  \int_{a+h}^{a+2h}f(x)\,dx  +  ...  +  \int_{a+(N-1)h}^{a+Nh}  \approx   \frac{h}{2}(f_0+f_1)  +  \frac{h}{2}(f_1+f_2)  +  ...  +  \frac{h}{2}(f_{N-1} + f_N)$

$\Rightarrow  \frac{h}{2}(f_0 + f_N + 2(f_1+f_2+...+f_{N-1}))$

$故得到此式: \quad I =\int_a^b f(x)\,dx \approx  \frac{h}{2}f_0 + hf_1 + hf_2 + ...+hf_{N-1}+\frac{h}{2}f_N  =   \frac{h}{2}(f_0 + 2(f_1+f_2+...+f_{N-1})+f_N)$

## Simpson法

$\int_{-h}^{h}f(x)\,dx \quad \approx \quad \int_{-h}^hP_2(x)\,dx = \frac{h}{3}[1P_2(-h) + 4P_2(0) + 1P_2(h)] \quad w_0 = \frac{h}{3},w_1=\frac{4h}{3},w_2 = \frac{h}{3}$

$Simpson在f(x)為三次多項式時事正確解$

$I = I^* + S_4h^4 + S_6h^6+...，當h很小時，S_4h^4 < C_4h^4(梯形)，$

$同理，若f(x)在[a,b]之間不近似於三次多項式，則S_4、S_6...常數很大，誤差不可忽略$

$將區間[a,b]分成N等分，N要是偶數，h = \frac{b-a}{N}$

$\int_0^2f(x)\,dx \approx \frac{h}{3}(f_0 + 4f_1+f_2) \quad , \quad \int_2^4f(x)\,dx \approx \frac{h}{3}(f_2 + 4f_3 + f_4)，$

$故\int_a^b f(x)\,dx \approx \frac{h}{3}((f_0 + 4f_1 + f_2) + (f_2 + 4f_3 + f_4) + (f_4 + 4f_5 + f_6) + ... +(f_{N-2} + 4f_{N-1} + f_N))$

$\Rightarrow \int_a^b f(x)\,dx \approx \frac{h}{3}(f_0 + 4f_1 + 2f_2 + 4f_3 + 2f_4 + ... + 4f_{N-1} + f_N)$

## 程式邏輯

$1.固定細分份數N$

$2.固定收斂值$

$執行一次梯形法得到I_{T_1}^{*}，再細分一次得I_{T_2}^{*}，比較二者之間差異小於一收斂條件時，|I_{T_2}^{*} - I_{T_1}^{*}|< \varepsilon，則I_{T_2}^{*}為結果返回，否則再細分一次直到收斂為止$