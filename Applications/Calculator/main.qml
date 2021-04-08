import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5

Window {
    id: main
    width: 260
    height: 360
    visible: true
    title: qsTr("Calculator")

    Row{
        TextField{
            id: output
            placeholderText: qsTr("0")
        }
    }
    GridLayout{

        width: parent.width
        height: parent.height
        anchors.fill: parent
        columns: 4
        rows: 5

        Button{
            id: button7
            text: "7"
            onClicked: output.text += text
        }
        Button{
            id: button8
            text: "8"
            onClicked: output.text += text
        }
        Button{
            id: button9
            text: "9"
            onClicked: output.text += text
        }
        Button{
            id: clear
            text: "clear"
            onClicked: output.text = ""

        }

        Button{
            id: button4
            text: "4"
            onClicked: output.text += text
        }
        Button{
            id: button5
            text: "5"
            onClicked: output.text += text
        }
        Button{
            id: button6
            text: "6"
            onClicked: output.text += text
        }
        Button{
            id: divide
            text: "/"
            onClicked: output.text += text
        }




        Button{
            id: button1
            text: "1"
            onClicked: output.text += text
        }
        Button{
            id: button2
            text: "2"
            onClicked: output.text += text
        }
        Button{
            id: button3
            text: "3"
            onClicked: output.text += text
        }
        Button{
            id: multiply
            text: "*"
            onClicked: output.text += text
        }




        Button{
            id: button0
            text: "0"
            onClicked: output.text += text
        }
        Button{
            id: decimalpoint
            text: "."
            onClicked: output.text += text
        }
        Button{
            id: equals
            text: "="
            onClicked:{}
        }
        Button{
            id: minus
            text: "-"
            onClicked: output.text += text
        }





    }
}
