# ZedBoard PS-PL Basic
會使用 Vivado 和 Xilinx SDK 做基本操作,並使用PS和PL通訊的AXI-GPIO,使開發板上的LED亮滅.

因為是基本操作,所以我把每個步驟都列出來,希望初學者可以更容易入門,所以會過於冗長,請各位見諒.

假如看不慣圖文的話,我也有做成影片,可以自己選擇看哪個.

不過兩種是不同時間點做的,會有一些小差異,不過大致上都是相同.

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
> ZedBoard有C和D板子,我們可以從這邊看到,不過現在大部份都是D,只有剛出時購買的才會是C.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/ZedBoard.png "ZedBoard")

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
> 將設計區塊的設計,自動生成為HDL和相對應的約束文件.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/28.png "28")

<br>步驟 29
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/29.png "29")

<br>步驟 30
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/30.png "30")

<br>步驟 31
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/31.png "31")

<br>步驟 32
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/32.png "32")

<br>步驟 33
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/33.png "33")

<br>步驟 34
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/34.png "34")

<br>步驟 35
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/35.png "35")

<br>步驟 36
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/36.png "36")

<br>步驟 37
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/37.png "37")

<br>步驟 38
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/38.png "38")

<br>步驟 39
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/39.png "39")

<br>步驟 40
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/40.png "40")

