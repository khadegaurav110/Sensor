import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Column{

    spacing: 20

      Button{

          text:"resulr"
          onClicked: {

          let x= data1.set_tempareture(66);
          name.text="data from :"+x
          }
      }

      Text {
          id: name
          text: qsTr("text")
      }
      Button{
      text:"error"
      onClicked: {
      try{
      let result=devi(10,0)

      }
      catch(e){
      console.error("error ocurrred",e.message);}

      }
      }
    }


    function devi(a,b)
    {
        if(b===0)
        {
            throw new Error("not allow");
        }
        return a/b;
    }
}
