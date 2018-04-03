import java.io.*;
import java.net.*;
import java.net.Socket;

class TCPClient
{
	public static void main (String argv []) throws IOException
{
	String sentence;
	String modifiedSentence;
	BufferedReader inFromUser = new BufferedReader (new InputStreamReader (System.in));
	Socket clientSocket = new Socket ("192.168.17.129",8085);
	DataOutputSteram outToServer = new DataOutputStream (clientSocket.getOutputStream());
	BufferedReader inFromServer = new BufferedReader (new InputStreamReader (clientSocket.getInputStream()));
	System.out.println("Hello");
	sentence=inFromUser.readLine();
	outToServer.writeBytes(sentence + '\n');
		
	modifiedSentence = inFromServer.readLine();
	clientSocket.close();

}
}