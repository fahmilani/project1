import java.io.*;
import java.net.*;
import java.net.Socket;

class TCPServer {
public static void main (String argv []) throws IOException
{
	String clientSentence;
	String capitalizedSentence;
	ServerSocket welcomeSocket = new ServerSocket (8085);

	while 

{
	Socket connectionSocket = welcomeSocket.accept();
	BufferedReader inFromClient =new BufferedReader (new InputStreamReader(connectionSocket.getInputStream()));
	DataOutputStream outToClient = new DataOutputStream(connectionSocket.getOutputStream());
	System.out.println("Response");
	clientSentence = inFromClient.readLine();
	
	if (clientSentence.equalsIgnoreCase("assalamualaikum"))
	System.out.println("waalaikumusalam");
	else
	System.out.println("are you a muslim?");
	
	capitalizedSentence= clientSentence.toUpperCase() + '\n' ;
	outToClient.writesBytes(capitalizedSentence);
}
}
}
	