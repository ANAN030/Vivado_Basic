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

