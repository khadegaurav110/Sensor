import QtQuick 2.15
import QtQuick.Controls
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
Item {
    Page {
        id: coffeeselectionpage
        signal startBrewing()

        Column {
            anchors.centerIn: parent
            spacing: 20

            Text {
                text: "Select Coffee Type"
                font.pointSize: 24
                horizontalAlignment: Text.AlignHCenter
            }

            ComboBox {
                id: coffeeType
                width: 200
                model: ["Espresso", "Cappuccino", "Americano", "Latte"]
                currentIndex: 0
            }

            Row {
                spacing: 10
                Text { text: "Strength:" }
                Slider {
                    id: strengthSlider
                    from: 1
                    to: 5
                    stepSize: 1
                    value: 3
                }
                Text { text: strengthSlider.value }
            }

            Row {
                spacing: 10
                Text { text: "Cup Size:" }
                ComboBox {
                    id: cupSize
                    width: 100
                    model: ["Small", "Medium", "Large"]
                }
            }

            Button {
                text: "Start Brewing"
                onClicked: startBrewing()
            }
        }
    }
}
}
