[PCB-Prototyping-Catalogue](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue)  >>  [DIY & Maker](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/DIY-Maker/README.md)  >> Solder Reflow Plate PCB

<br>

[![Telegram](https://img.shields.io/badge/join-telegram-blue.svg?style=for-the-badge)](https://t.me/+W4rVVa0_VLEzYmI0)
 [![WhatsApp](https://img.shields.io/badge/join-whatsapp-green.svg?style=for-the-badge)](https://chat.whatsapp.com/FkNC7u83kuy2QRA5sqjBVg) 
 [![Donate](https://img.shields.io/badge/donate-$-brown.svg?style=for-the-badge)](http://paypal.me/mtpsilva)
 [![Say Thanks](https://img.shields.io/badge/Say%20Thanks-!-yellow.svg?style=for-the-badge)](https://saythanks.io/to/mtpsilva)
![](https://img.shields.io/github/last-commit/aeonSolutions/PCB-Prototyping-Catalogue?style=for-the-badge)
<a href="https://trackgit.com">
<img src="https://us-central1-trackgit-analytics.cloudfunctions.net/token/ping/l5m5z1845s10s47cuyl5" alt="trackgit-views" />
</a>
[![Open Source Love svg1](https://badges.frapsoft.com/os/v1/open-source.svg?v=103)](#)
[![GitHub Forks](https://img.shields.io/github/forks/aeonSolutions/PCB-Prototyping-Catalogue.svg?style=social&label=Fork&maxAge=2592000)](https://www.github.com/aeonSolutions/PCB-Prototyping-Catalogue/fork)
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat&label=Contributions&colorA=red&colorB=black	)](#)
[<img src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" data-canonical-src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" height="30" />](https://www.buymeacoffee.com/migueltomas)
![](https://img.shields.io/github/downloads/aeonSolutions/AeonLabs-MCU-Burner-USB-to-UART-TTL/total?style=for-the-badge)
![](https://views.whatilearened.today/views/github/aeonSolutions/AeonLabs_Solder_Reflow_Plate_PCB.svg)
![](https://img.shields.io/github/downloads/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/total?style=for-the-badge)

<br />


# Solder Reflow Plate PCB
 Improved Kicad PCB schematics for a DIY Solder Reflow Plate from the original pcb schematic by [AfterEarthLTD](https://github.com/AfterEarthLTD/Solder-Reflow-Plate). AeonLabs Solder Reflow Plate features a Nextion 3.2" LCD Touch and a ESP32 WROOM32 for WiFi and Bluetooth connectivity. 

*Don't forget to LIKE , SHARE and subscribe the free whatsApp group* and if you liked this PCB consider buying me a cup of coffee. Links below.


### Status
![](https://github.com/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/blob/main/Designs/working_green.png)  Revision 1.3 needs to cross TX/RX pads or else fails with "no serial data ..."

![](https://github.com/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/blob/main/Designs/working_yellow.png) revision 2.0 waiting to be tested.

If you have already tested this PCB send me a message.

## Versions
### AeonLabs improved Hot Solder Reflow Plate
- revision 2.x (ToDo)
  - Firmware code for the ESP32 WROOM32 and for the Nextion 3.2" LCD Touch on this Solder Reflow Plate
  - Android App to view and control the hot plate temperature

- revision 2.0
  - Serial TX/RX track lines correction.
  - Added an ON/ OFF switch 
  - Redesigned and new 5.0V and 3.3V power managment for more than 90% efficiency . No more hot LDOs on the PCB! 
 
- revison 1.x
  - Upgraded to ZLDO1117 voltage regulators with copper heat dissipation area
  - ESP32 MCU with BLE and WiFi
  - 2x Temperature seensors for improved management of Reflow temperature
  - 12VDC (5A Minimum)
  - 5.5mm x 2.5mm Barrel Jack
  - With corner M7.5 holes for placement of an aluminium plate on top of the PCB for extended lifetime and durability
  - Electronic components placed on the bottom side for extended lifetime and improved duraility
  - Aluminium plate can now be exported as Gerber to [FlatCAM](http://flatcam.org) and drilled using [Candle](https://github.com/Denvi/Candle) 


<p align="center">
  <a href="https://www.youtube.com/watch?v=1Q-IPH6u9Qg">
   <img height="300" src="https://github.com/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/blob/main/Designs/youtube.png">
  </a>
  </p>

### *FlatCAM settings*
 
One can CNC the aluminium base plate on any GBRL CNC machine like this one on AliExpress [here](https://s.click.aliexpress.com/e/_AOOXQ7). Don't forget to use a thin lubricating oil for improved results. 
 
  - Feed Rate: 0.3-0.5 units/min
  - Depth pass: 1.1 mm or 0.04331 inch (unless your setup your CNC with Z-height correction; for a 8mm thick aluminium plate)
  - Tool [CNC Single Flute Milling cutters for Aluminum](https://www.aliexpress.com/item/1005004188243213.html?spm=a2g0o.cart.0.0.3cb23c00L4Ibog&mp=1): 2mm or 0.07874 inch
  - pass overlap: 0.0
  
 ________________________________________________________________________________________________________________

### Regular Hot Solder Reflow Plate as seen on GreatScott
- revision 1.0
  - 120mm x 70mm (Bigger hot plate dimensions)
  - 12VDC (5A Minimum)
  - 5.5mm x 2.5mm Barrel Jack
  - 0.91" OLED Display
  - Atmel Mega 328P MCU (this version includes a crystal for programming)
  - With corner M2.5 holes for placement of an aluminium plate on top of the PCB for extended lifetime and durability.
 

## As Seen On GreatScott! 
This is the Gerber & KiCad files for the Youtuber GreatScott! video "The Best way to reflow solder? Hot Plate to the rescue! DIY or Buy"
Check it out here - [The Best way to reflow solder? Hot Plate to the rescue! DIY or Buy](https://www.youtube.com/watch?v=QarizoUnRfk)


You have 2 options:

Download this repository for the KiCad Files or, download the Gerber files in the release section of this repository

### alternatively if you do not want to build a PCB by yourself, you can buy here:

<p align="center">
  <a href="https://www.tindie.com/stores/aeonlabs/">
    <img height="75" src="https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/tindie_sell.png">
  </a>
</p>

The price will be around 30eur plus postage fees.
(I will also deliver the assembled PCB with all the components in place at an aditonal cost).


<p align="center">
   <img height="300" src="https://github.com/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/blob/main/Designs/concept.jpg">
</p>
  
<p align="center">
   <img width="48%" src="https://github.com/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/blob/main/Designs/pcb_front.png">
   <img width="48%" src="https://github.com/aeonSolutions/AeonLabs-Solder-Reflow-Plate-PCB/blob/main/Designs/pcb_back.png">
</p>
  
## Liked it ? Get a Free PCB for yourself
Send me your device or hardware and i will design a custom PCB for it. Free of charge. Contact-me on WhatsApp or email for more info. 

| ![](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/likeShareComment.jpg) | *Don't forget to **LIKE** , **SHARE** and **subscribe** the free chat groups* and if you downloaded one of AeonLabs's PCBs consider sponsor  any open hardware project with a donation or a cup of coffee. Links on the top, right side pane and below. |
|-------------|------|

<br />
<br />

## Q&A WhatsApp/Telegram Groups
| ![](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/whatsAppTelegram.png) | Subscribe to the WhatsApp or Telegram channel to get latest information about any of this KiCad projects and get help. Or simply like this kind of projects and want to stay updated with the latest research ideas and prototypes during the day and week. [![Telegram](https://img.shields.io/badge/join-telegram-blue.svg?style=for-the-badge)](https://t.me/+W4rVVa0_VLEzYmI0) [![WhatsApp](https://img.shields.io/badge/join-whatsapp-green.svg?style=for-the-badge)](https://chat.whatsapp.com/FkNC7u83kuy2QRA5sqjBVg) |
|-------------|------|


<br />
<br />
<br />

## Youtube Channel
| ![](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/youtube.png) | Subscribe to my Youtube channel for PCB assembly instruction or any other related to Artificial Intelligence, Smart devices and robotics. Link to the channel [here](https://www.youtube.com/channel/UCAewCBpMRPGCyFc1ET5CHJw). My most recent video is .... |
|-------------|------|


#### PCB Parts list:
- 1x AMS1117-3.3, sold on AliExpress [here](https://s.click.aliexpress.com/e/_AOIVLN)
- 1x AMS1117-5.0, sold on AliExpress [here](https://s.click.aliexpress.com/e/_AOIVLN)
- 1x FUSE SMD 1206 5A, sold on AliExpress [here](https://s.click.aliexpress.com/e/_A8yVgJ)
- 1x MM1Z24, sold on AliExpress [here](https://www.aliexpress.com/item/1005003538876461.html?spm=a2g0o.order_list.0.0.2bb91802tqEyK1)
- Barrel Jack, sold on AliExpress [here](https://s.click.aliexpress.com/e/_As3F2L)
- 1x FPC 1x4 pin 1mm pitch horizontal, sold on AliExpress [here](https://s.click.aliexpress.com/e/_ASMTDp)
- 1x FPC flat cable 1mm pitch 4 pin, sold on AliExpress [here](https://s.click.aliexpress.com/e/_9js0C7)
- 1x DSR1M, sold on AliExpress [here](https://s.click.aliexpress.com/e/_9JQobh)
- 1x SMAJ18A, sold on AliExpress [here](https://s.click.aliexpress.com/e/_9zW0DN)
- 2x LMT85LP, sold on AliExpress [here](https://www.aliexpress.com/item/1005003755656556.html?spm=a2g0o.order_list.0.0.42ba1802MVKTRu)
- 1x UMW30N06, sold on AliExpress [here](https://www.aliexpress.com/item/4000687585069.html?spm=a2g0o.order_list.0.0.2bb91802tqEyK1)
- 1x ESP32 WROOM32, sold on AliExpress [here](https://www.aliexpress.com/item/32912371635.html?spm=a2g0o.productlist.0.0.1c737b00qtI6F1&algo_pvid=2b9d3923-cad6-4894-abba-bcbe1659aab6&algo_exp_id=2b9d3923-cad6-4894-abba-bcbe1659aab6-0&pdp_ext_f=%7B"sku_id"%3A"65986896288"%7D&pdp_npi=2%40dis%21EUR%21%212.27%21%21%21%21%21%400bb0622916528901078995704e092a%2165986896288%21sea)
- 1x NEXTION 3.2" LCD Touch, sold on AliExpress [here](https://www.aliexpress.com/item/32678581956.html?spm=a2g0o.productlist.0.0.16f46e8cmt3XbA&algo_pvid=657314cc-0888-4621-8795-71fcd735d410&algo_exp_id=657314cc-0888-4621-8795-71fcd735d410-2&pdp_ext_f=%7B%22sku_id%22%3A%2210000003437337029%22%7D&pdp_npi=2%40dis%21EUR%21%2126.15%21%21%21%21%21%40210318b916528902149054769e34ce%2110000003437337029%21sea)


<br />
<br />

## Author

You can get in touch with me on my LinkedIn Profile:

#### Miguel Tomas

[![LinkedIn Link](https://img.shields.io/badge/Connect-Miguel--Tomas-blue.svg?logo=linkedin&longCache=true&style=social&label=Connect)](https://www.linkedin.com/in/migueltomas/)

<a href="https://stackexchange.com/users/18907312/miguel-silva"><img src="https://stackexchange.com/users/flair/18907312.png" width="208" height="58" alt="profile for Miguel Silva on Stack Exchange, a network of free, community-driven Q&amp;A sites" title="profile for Miguel Silva on Stack Exchange, a network of free, community-driven Q&amp;A sites" /></a>

<a href="https://app.userfeel.com/t/2f6cb1e0" target="_blank"><img src="https://app.userfeel.com/tester/737648/image?.png" width="257" class="no-b-lazy"></a>

You can also follow my GitHub Profile to stay updated about my latest projects: [![GitHub Follow](https://img.shields.io/badge/Connect-Miguel--Tomas-blue.svg?logo=Github&longCache=true&style=social&label=Follow)](https://github.com/aeonSolutions)

<br>

**Hire me** <br>
See [here](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/wiki/How-to-Hire-AeonLabs) how to hire AeonLabs.

<br>

### Be supportive of my dedication and work towards technology education and buy me a cup of coffee
The PCB design Files I provide here for anyone to use are free. If you like this Smart Device or use it, please consider buying me a cup of coffee, a slice of pizza or a book to help me study, eat and think new PCB design files.

<p align="center">
    <a href="https://www.buymeacoffee.com/migueltomas">
        <img height="35" src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png">
    </a>
</p>


### Make a donation on PayPal
Make a donation on PayPal and get a TAX refund*.

<p align="center">
    <a href="http://paypal.me/mtpsilva">
        <img height="35" src="https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/paypal_small.png">
    </a>
</p>

### Support all these open hardware projects and become a GitHub sponsor  
Liked any of my PCB KiCad Designs? Help and Support my open work to all by becoming a GitHub sponsor.

<p align="center">
    <a href="https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/become_a_sponsor/aeonlabs-github-sponsorship-agreement.docx">
        <img height="50" src="https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/want_to_become_a_sponsor.png">
    </a>
    <a href="https://github.com/sponsors/aeonSolutions">
        <img height="50" src="https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/blob/main/media/become_a_github_sponsor.png">
    </a>
</p>

# 

### License

Before proceeding to download any of AeonLabs software solutions for open-source development and/or PCB hardware electronics development make sure you are choosing the right license for your project. See [AeonLabs Solutions for Open Hardware & Source Development](https://github.com/aeonSolutions/PCB-Prototyping-Catalogue/wiki/AeonLabs-Solutions-for-Open-Hardware-&-Source-Development) for more information. 

