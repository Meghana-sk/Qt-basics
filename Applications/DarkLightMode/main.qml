import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Dark Light Mode")

    property int count: 0
    Rectangle{
        id: rectId
        height: parent.height
        width: parent.width
        color: "beige"
    }

    RoundButton{
        id: change
        text: "dark mode"
        anchors.centerIn: parent

        onClicked:

        {

            if(count++%2 == 0)
                 rectId.color = "darkslategray"
             else
                 rectId.color = "beige"




//            while(){
//                rectId.color = rectId.color == "khaki" ? "darkslategrey" : "khaki"
        }







            /*rectId.color == "khaki" ? rectId.color = "khaki" : rectId.color = "darkslategray"*/
//            /*{







    }
}
