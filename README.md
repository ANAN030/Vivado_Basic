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
> ZedBoard有C和D板子,我們可以從這邊看到.
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
> 就會看到Vivado幫我們接的線,再來新LED和AXI-GPIO的部份.
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
> 自動整理.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/18.png "18")

<br>步驟 19
> 接下來我們打一些用不到的功能關掉,點擊兩下.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/19.png "19")

<br>步驟 20
> "UART" 點擊兩下,會自動跳過去.
> ![GITHUB](https://raw.githubusercontent.com/ANAN030/ZedBoard-PS-PL-Basic/master/image/20.png "20")

