import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello Worsssld")


    StackView{
    id:stack
    anchors.fill: parent

    }

    Button{
    text: "c"
    onClicked: stack.push(h.qml)
    }

}
