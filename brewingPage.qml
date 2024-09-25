import QtQuick 2.15
import QtQuick.Controls
Item {
    Page {
        id: brewingPage

        signal brewingFinished()

        Column {
            anchors.centerIn: parent
            spacing: 20

            Text {
                text: "Brewing..."
                font.pointSize: 24
                horizontalAlignment: Text.AlignHCenter
            }

            ActivityIndicator {
                running: true
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Button {
                text: "Stop Brewing"
                onClicked: {
                    coffeeMachine.stopBrewing()
                    brewingFinished()
                }
            }

            onBrewingFinished: stackView.pop()
        }
    }

}
