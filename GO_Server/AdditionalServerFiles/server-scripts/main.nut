function onInit()
{
    print("My Gamemode v0.1");
}

function onJoin(pid)
{
	local message = getPlayerName(pid) + " joined the game";

	for (local i = 0; i < getMaxSlots(); ++i)
		if (pid != i && isConnected(i))
			sendMessage(i, 0, 255, 0, message);
}

function onDisconnect(pid, reason)
{
	local message = getPlayerName(pid) + " left the game";

	for (local i = 0; i < getMaxSlots(); ++i)
		if (pid != i && isConnected(i))
			sendMessage(i, 255, 0, 0, message);
}

function onUnconscious(pid, kid)
{
	sendMessageToAll(255, 255, 0, getPlayerName(kid) + " omdli³ (?) " + getPlayerName(pid));
}

function onDie(pid, kid)
{
	sendMessageToAll(255, 0, 0, getPlayerName(kid) + " killed " + getPlayerName(pid));
}

function onStandUp(pid)
{
	sendMessageToAll(255, 255, 0, getPlayerName(pid) + " Stand up!");
}