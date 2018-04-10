# ZedBoard PS-PL Basic
會使用 Vivado 和 Xilinx SDK 做基本操作,並使用AXI-GPIO做PS和PL交換資料的橋樑,使開發板上的LED亮滅.

因為是基本操作,所以我把每個步驟都列出來,希望初學者可以更容易入門,所以會過於冗長,請各位見諒.

假如看不慣圖文的話,我也有做成影片,可以自己選擇看哪個.

不過兩種是不同時間點做的,會有一些小差異,不過大致上都是相同.

# 影片

https://drive.google.com/open?id=0B4iGyGJUsol1eDV1ZE1BSWJ3VU0

<br>

# Vivado 操作步驟
步驟 1
> 創建一個新的專案<br><br>
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/01.png "01")

<br>步驟 2
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/02.png "02")

<br>步驟 3
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/03.png "03")

<br>步驟 4
> 在這次的專案沒有需要另外加入其他檔案,所以"Do not specify sources at this time"選擇起來.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/04.png "04")

<br>步驟 5
> 這邊選擇自己的開發板型號,而我是使用ZedBoard開發板.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/05.png "05")
> ZedBoard有C和D板子,我們可以從這邊看到.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/ZedBoard01.png "ZedBoard01")

<br>步驟 6
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/06.png "06")

<br>步驟 7
> 創建一個設計區塊
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/07.png "07")

<br>步驟 8
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/08.png "08")

<br>步驟 9
> 新增PS部份
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/09.png "09")

<br>步驟 10
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/10.png "10")

<br>步驟 11
> 選擇這個讓Vivado幫我們自動接線.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/11.png "11")

<br>步驟 12
> 這邊設置跟上面一樣就好.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/12.png "12")

<br>步驟 13
> 就會看到Vivado幫我們接的線,再來新增LED和AXI-GPIO的部份.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/13.png "13")

<br>步驟 14
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/14.png "14")

<br>步驟 15
> 一樣我們讓Vivado幫我們接線和加入需要的元件.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/15.png "15")

<br>步驟 16
> 把GPIO部份設定成LED.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/16.png "16")

<br>步驟 17
> AXI-GPIO設定,這邊跟上面一樣就好.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/17.png "17")

<br>步驟 18
> 自動整理.（可能位置會跟我的有些差異）
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/18.png "18")

<br>步驟 19
> 接下來我們把一些用不到的功能關掉,讓Vivado不要生成沒用到的東西.<br>
> （步驟19到步驟25不一定要做,因為沒把這些用不到功能的關掉,也不會影響到最後的結果）
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/19.png "19")

<br>步驟 20
> "UART" 點擊兩下,會自動跳過去.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/20.png "20")

<br>步驟 21
> 把這些關掉,在這次的專案中我們不會用到這些.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/21.png "21")

<br>步驟 22
> 還有一些要關掉,所以在點進去.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/22.png "22")

<br>步驟 23
> "TTC" 點擊兩下,會自動跳過去.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/23.png "23")

<br>步驟 24
> 把這個關掉,一樣是這次專案用不到.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/24.png "24")

<br>步驟 25
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/25.png "25")

<br>步驟 26
> 儲存和驗證
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/26.png "26")

<br>步驟 27
> 你也是用Vivado 2017的版本,會出現這個警告,不過這警告不會影響到結果,所以我們這邊先無視.<br>
> 我有找到也有人遇到這問題的解釋,假如有興趣可以點進去看看.<br>
> <https://forums.xilinx.com/t5/Design-Entry/Vivado-critical-warning-when-creating-hardware-wrapper/m-p/767113#M13539>
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/27.png "27")
> 你用Vivado 2016或以下的版本,應該是不會出現上面的問題,會直接跳出下面這個,就表示驗證完成.<br>
> Vivado 2017再做一次驗證,就不會再出現剛剛的警告,會直接跳出下面這個.<br>
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/27-1.png "27-1")

<br>步驟 28
> 將設計區塊的設計,自動生成為HDL（硬體描述語言）和相對應的約束文件.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/28.png "28")

<br>步驟 29
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/29.png "29")

<br>步驟 30
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/30.png "30")

<br>步驟 31
> 將剛剛生成的HDL,用頂層文件包裝起來.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/31.png "31")

<br>步驟 32
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/32.png "32")

<br>步驟 33
> 接下來就是生成位元流,而FPGA就是靠這位元流來設定電路的.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/33.png "33")

<br>步驟 34
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/34.png "34")

<br>步驟 35
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/35.png "35")

<br>步驟 36
> 等一小段時間,讓Vivado生成.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/36.png "36")

<br>步驟 37
> 生成完後,這邊我們就不去看生成後的電路分佈了.（假如有興趣的話,再影片的部份我有點進去)
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/37.png "37")

<br>步驟 38
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/38.png "38")

<br>步驟 39
> "Include bitstream"這要勾起,不然等等要自己去選擇位元流檔的位置,除非你要用另外的位元流檔.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/39.png "39")

<br>步驟 40
> 這是Vivado的最後步驟,Vivado會去打開Xilinx SDK,那我們就可開始設計PS部份了.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/40.png "40")

<br>

# Xilinx SDK 操作步驟
步驟 1
> Xilinx SDK 一開始會載入一些在Vivado的檔案,等載入完就會看到這個畫面.<br>
> p.s.遇到載入失敗的話,我是把Vivado和SDK分開灌就解決,假如有遇到可以試試看這方法.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/41.png "41")

<br>步驟 2
> 新增一個專案.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/42.png "42")

<br>步驟 3
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/43.png "43")

<br>步驟 4
> 選擇"Empty Application",這是建立一個空的專案,你也可以選擇"Hello World",會自動幫你建一些簡單的檔案.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/44.png "44")

<br>步驟 5
> 因為我選擇空的專案,所以要新增一個.c檔.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/45.png "45")

<br>步驟 6
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/46.png "46")

<br>步驟 7
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/47.png "47")
> 程式碼在這.
> ```c
> #include <stdio.h>
> #include <stdlib.h>
> #include "xparameters.h"		// 參數集.
> #include "xgpio.h"	// 簡化PS對PL的GPIO操作的函數庫.
> 
> // 延遲用.
> void delay(int dly)
> {
>     int i, j;
>     for (i = 0; i < dly; i++) {
>     	for (j = 0; j < 0xffff; j++) {
>     		;
>         }
>     }
> }
> 
> // 主程式.
> int main()
> {
>     XGpio LED_XGpio;		// 宣告一個GPIO用的結構.
>     int LED_num = 0b11000011;	// 宣告一個變數,做運算用暫存用.
> 
>     XGpio_Initialize(&LED_XGpio, XPAR_AXI_GPIO_0_DEVICE_ID);	// 初始化LED_XGpio.
>     XGpio_SetDataDirection(&LED_XGpio, 1, 0);		// 設置通道.
> 
>     printf("Start!!!");
> 
>     while(1) {
>     	printf("LED_num = 0x%x\n", LED_num);
> 
>     	XGpio_DiscreteWrite(&LED_XGpio, 1, LED_num);		// LED_XGpio通道,送LED_num值進去.
> 
>     	LED_num = ~LED_num;		// LED_num變數反相.
> 
>     	delay(1000);
>     }
> 
>     return 0;
> }
> ```
>
> <br>
>
> 這個函數庫裡面放了很多記憶體的地址,而這些地址就是讓PS和PL做通訊的媒介,....
> 
> ```
> #include "xparameters.h"		// 參數集.
> ``` 

<br>步驟 8
> 把燒路線和電源打開.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/ZedBoard02.png "ZedBoard02")

<br>步驟 9
> 接下來要將Vivado所生成的位元流設定進FPGA晶片中.<br>
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/48.png "48")

<br>步驟 10
> 要是剛剛在步驟39沒把"Include bitstream"打勾,那Bitstream這邊會沒有檔案.<br>
> 我們可以到
> ```
> .../"Vivado 專案名"/"Vivado 專案名" + .runs/impl_1/design_1_wrapper.bit
> ```
> 例.
> ```
> .../PSPL_Basic/PSPL_Basic.runs/impl_1/design_1_wrapper.bit
> ```
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/49.png "49")

<br>步驟 11
> 那接下來就是在開發板執行.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/50.png "50")

<br>步驟 12
> 把UART給接上.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/ZedBoard03.png "ZedBoard03")

<br>步驟 13
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/51.png "51")

<br>步驟 14
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/52.png "52")

