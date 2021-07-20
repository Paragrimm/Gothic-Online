function onInit()
{
   addMessage(0, 255, 0, "Hello " + getName() + " :)");
   enableGameNpcs(true); //cooperative(true) or sync empty word(false)
   
}

function onRespawn()
{
}

function quit()
{
    exitGame();
}



function onCommand(command, params)
{
	switch (command)
	{	
			
///////////// Commands ////////////////
/// Look //
		case "change_vis":
			setAdditionalVisual("hum_body_Naked0", 3, "Hum_Head_Pony", 20);
			sendVisual();
			break;
//// Look ///
/// Chat ////
		case "cls":
		    clearChat();
			addMessage(0, 255, 0, "Chat has cleared!")
	        break;
/// Chat ////
//// Time ////
       case "midday":
	       setTime(12, 00);
		   addMessage(0, 64, 0, "Midday!");
		   break;
	case "midnight":
	       setTime(24, 00);
		   addMessage(0, 64, 0, "Midnight!");
		   break;	   
	   case "night":
	      setTime(22,00);
		  addMessage(0, 64, 0, "Good evening!");
		  break;
	   case "morning":
	      setTime(7,00);
		  addMessage(0, 64, 0, "Good morning!");
		  break;
		  
      case "hours":
	      local time = getTime();
        addMessage(0, 255, 250, "Time " + time.hour + ":" + time.min); 
		break;
		
//// Time ////
//// Quit and suicide ////
       case "q":
	   setFreeze(true);
       addMessage(255, 0, 0, "Quit game for 5 seconds!");
       setTimer(quit, 5000, false);
		  break;
		  
	   case "kill":
	   setHealth(0);
	   break;
	   
///// Quit and suicide /////
	}
}