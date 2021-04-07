import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML CPP interaction using root context")

    ColumnLayout{
        spacing: 20
        Button{
            id: btn1
            text: "INVOKE"
            onClicked: {
                Utitlity.print()
            }
        }
        Button{
            id: btn2
            text: Utitlity.m_author
            onClicked: {
                Utitlity.m_author = "Meghana"
                console.log("properties - ",Utitlity.m_author)
            }
        }
        Button{
            id: btn3
            text: "SIGNAL-SLOTS"
        }
    }

}
