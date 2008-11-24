/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testCos.h"

#define SOURCE {0.6087216374946681218816f,-0.4914009399790010834685f,0.2966492127240239473629f,\
-1.0120131171793795843428f,-2.1768580524449996360659f,0.0399891371904198267284f,\
0.3264664449949340463419f,0.3928915710000103755917f,-0.9023248339668938911018f,\
-0.7061054028011619632110f,0.6351420537982425118528f,1.7243031942788638044561f,\
-1.193843423508647916265f,-0.6699486724870092890782f,0.9455390047179551560319f,\
-0.7269584830448905243827f,0.0587220167793607444873f,0.7465722023081590164040f,\
-1.8115798920517958148224f,-2.7758706356233147083401f,1.6672616062636114175888f,\
-0.0836705642425854267952f,0.3278617890836109105557f,-0.4784618803967296551960f,\
-1.5167866307363953026766f,0.3278666902123760218402f,1.4583399615307341967707f,\
0.1568728504489345088f,0.8788327319516627822438f,0.6503974594047504664829f,\
-1.2192475208695570110251f,1.1760897921697979207067f,-1.8443279857673484656289f,\
0.7800878370874437806037f,-1.7143820612787801227483f,-1.2442138561935551788196f,\
-0.5030865876060848229656f,-0.7500891916411158710787f,0.0131204357988426462828f,\
-1.3051873378120935065283f,-0.4721103394959948462706f,-1.08171405175402890464f,\
0.1772346225663179453136f,0.0709726766378662859980f,0.5997183167182360552516f,\
-0.7982542475055777186910f,1.1146919091581586336304f,-0.5226194052411643475864f,\
-0.3280122727754089528851f,0.0845844607820355476324f,-0.4076056231156577891461f,\
2.671024580732940023609f,0.2751537532064078916960f,0.6141628828811964702084f,\
-0.7694928564341785293124f,1.5452838740749164081478f,1.2047554263319388834219f,\
-0.4418728868867642933793f,-2.3845314085200706166745f,-0.4507303538478215632068f,\
-1.2843948816610906149549f,0.6258568994217935665958f,0.5221599455292258440409f,\
0.6881147826420792590341f,-1.5350411433640571701176f,-0.9627472135269001807245f,\
-0.5218069771892938080171f,0.1257945676013507985136f,-1.6629602539620385037722f,\
-0.1168122168368753571732f,0.6319751771097191772597f,0.0279680711838030011951f,\
-1.0789454333610759562134f,-2.2539675570413915117740f,0.0159524501831603895963f,\
0.7246005623822228125519f,1.3584241656028799294376f,0.1335331404272114830256f,\
0.8003059664568770159576f,-1.5933335032689068810896f,-0.2766963701941145270524f,\
-0.1259819476132254256751f,-2.1871819624452908392698f,-0.0027183437417650840526f,\
0.0895441283705892265843f,-0.0655528187812533247314f,0.0082181667448872272597f,\
-0.1292799439278431716804f,0.8059814954561199673577f,-1.0227158239595737221350f,\
-1.1728578375397291644333f,0.3095622814458759419765f,0.4085150016548139140227f,\
0.4376992889872045044974f,3.0932123457325086945957f,-0.2404500241757465406334f,\
-0.2553482065690487190501f,1.0058683512127921666490f,1.8395637792194936555035f,\
0.3411429898658094317376f,-3.0536685582128435534344f,-0.1095788307430261981912f,\
1.6414918920137913094237f,-1.0744672373614887472826f,1.5353378953533194373193f,\
-0.8528406784492137404641f,-0.7422456212235352124296f,0.1342811638770788351671f,\
-1.6549750406888592557664f,-0.7256367869747750720677f,-0.0862485588565954086615f,\
-0.0561038363580659213414f,-0.0030846890449726638815f,0.2539566584786872027735f,\
-2.255576969911772700073f,-1.7353562843564334094992f,1.4790955315931679781016f,\
-0.6277258320505759714436f,-0.874734985447433444072f,1.7535503835541961237254f,\
-0.8019918985373268860428f,0.2826253943812546687298f,0.9297345065408313402600f,\
-0.1628091770786383452041f,-0.5361503318172788912221f,-0.1559543394910963276523f,\
0.4214606760227143644748f,1.9422068405845787086861f,1.126122745997659491124f,\
-0.3806596390838080656849f,0.2838150495409667017910f,0.5356418000869134221631f,\
-0.8698259506453359657385f,-1.4811954887734988250969f,-0.6640101248288414748089f,\
-0.8768395331826340788339f,0.1637943427647920169310f,0.8023136616688257838348f,\
1.9190648920981443481537f,-1.1659867862660415749332f,0.9175250832331292016875f,\
-0.4629851548188154697350f,1.1531379126231540155345f,1.280357188491430875388f,\
0.8752030571429955108087f,-1.80360898378670553299f,0.5261137866109517613467f,\
0.0015036147858927245008f,-0.9395126502065724860557f,0.1254332133415215488892f,\
0.7981010350443900058792f,-0.7787639258289269506008f,-2.211373434923878722458f,\
0.4245313340753193442900f,0.4777310697112210347015f,-0.7091015173222630085803f,\
2.5269774755909995000991f,-0.5189834616032670266961f,0.7465455379507028865760f,\
1.6922232637382539355286f,-0.7527036628439752741215f,-0.1791091421294778995854f,\
-1.143803039940205490410f,-0.3557089242818732288676f,-2.5859928945830414903639f,\
-0.4620292997028574988327f,2.1043646801028508264153f,0.2700104378784371483846f,\
-0.5683100411735593215923f,0.0576234736047250076241f,-0.3494123351876678440497f,\
-0.6437179916333417573071f,1.1183843932324186720706f,-1.7070244497383502135790f,\
-0.5423910203569126675660f,1.478528409100926088726f,1.4635937207455358421981f,\
0.9926533118110351106012f,-0.7069946768514858703725f,-0.7247022468472048561949f,\
0.0958136359005943571976f,-0.3502577985930430126693f,-0.7552136456030923428173f,\
0.4974020403078212582137f,-1.1482817888259779781635f,-0.2861580091485689814057f,\
-0.5017215979538576231533f,-0.6146143460074020570261f,-0.8743941016318307335453f,\
0.6112858348465053381915f,1.1276508199848169766710f,-0.6796253617896085286176f,\
1.0967206821241466396799f,0.3644470031679390431556f,0.2076189090924974445240f,\
-0.5458105472995297136052f,-0.0671640776881476525562f,0.9301013215147568846675f,\
1.4191187165731935504454f,1.9739542618337482249302f}

#define RESULT {0.8203796801888452172591f,0.8816726743563225721090f,0.9563213494741442666225f,\
0.5301548730715204271746f,-0.5696350270974277485436f,0.9992005409985472708101f,\
0.9471814588690369296486f,0.9238058529293791121262f,0.6197871850499613310959f,\
0.7608947481851529026642f,0.8049874252319156875402f,-0.1529046956055711559141f,\
0.3680890208730970281081f,0.7838535385146575551474f,0.5853059322813873865954f,\
0.7471992477828661716188f,0.9982763577574981228580f,0.7340210854728602685171f,\
-0.2384636600673788464633f,-0.9338657938993391027793f,-0.0963157386477964672089f,\
0.9965016599751398418405f,0.9467330527147245211594f,0.8877041448701339376726f,\
0.0539834417486552073373f,0.9467314744445589624888f,0.1122194864288899307514f,\
0.9877206673462950448084f,0.6380503687973807513956f,0.7958431986465404062159f,\
0.3443523016260275904088f,0.3845373047091283913446f,-0.2701334763293031793197f,\
0.7108517612540402597077f,-0.1430928615933441672148f,0.32080801483743826008f,\
0.8760985949432102959378f,0.7316280694838999121288f,0.9999139283169750092028f,\
0.2624969502467918158750f,0.8906105597759395031687f,0.4698159512131697135295f,\
0.9843350146218102780793f,0.9974824965990314318276f,0.8254946325091827574738f,\
0.6979579732366844035951f,0.4404541009116093031039f,0.8665146735535679267670f,\
0.9466845833195259851678f,0.9964248667932769087940f,0.9180726139212290748404f,\
-0.8913108719456435125039f,0.9623834350402660220425f,0.8172561425171237514675f,\
0.718263617781651042549f,0.0255096851968806929978f,0.3579214307842031317364f,\
0.903952340447022550940f,-0.7268574491788566405148f,0.9001291834726419249790f,\
0.2825020879048804056666f,0.8104614523160890149356f,0.8667439221341659560949f,\
0.7724446547102603588542f,0.0357475654825572253248f,0.5712673305171682702763f,\
0.8669199123046601451748f,0.9920982915300309290529f,-0.0920335062605047438122f,\
0.9931852073290609039802f,0.8068622676403011118040f,0.9996089189905136285219f,\
0.4722581851967700972139f,-0.6312557202207959017315f,0.9998727623649044105036f,\
0.7487642434889083542515f,0.2107793581335721255776f,0.9910976901702407415584f,\
0.6964871898378746095659f,-0.0225352686591101247782f,0.961963168947402524900f,\
0.992074764843193790398f,-0.5780897184534614652307f,0.9999963053059259809885f,\
0.9959936026023269439733f,0.997852183268367110003f,0.9999662310577351886920f,\
0.9916549805054094557377f,0.6924034092861499622984f,0.5210498486203913870440f,\
0.3875187390378670992952f,0.9524670084743368514424f,0.9177117455650365407394f,\
0.9057292314266010002655f,-0.9988299011655918935304f,0.9712309045685737496356f,\
0.9675754035185222257098f,0.5353549836201899614352f,-0.2655433409023978952312f,\
0.9423728774251888262725f,-0.9961371662051550224248f,0.9940022450449995661259f,\
-0.0706366921418750404182f,0.4762007884740003804680f,0.0354510015922323284965f,\
0.65784633984897000758f,0.7369525027778347503471f,0.9909978235616448971612f,\
-0.0840793332663393455650f,0.7480769942249303472437f,0.9962828981406220973938f,\
0.9984265925479938186271f,0.9999952423505205079124f,0.9679259470687455735316f,\
-0.632503122148043273043f,-0.1638182491633654591645f,0.0915723300147998908738f,\
0.8093652317898135661878f,0.6412002458492904732879f,-0.1817384524188947747536f,\
0.6952764275967198148720f,0.9603265844478726664946f,0.5980467860661466961147f,\
0.9867758355724630670025f,0.8596815738538068352170f,0.9878637498486452228619f,\
0.9124923605358673528443f,-0.3629301323805959045288f,0.4301632279198022157374f,\
0.9284197599136463363578f,0.959994136496382766133f,0.8599412360983218484023f,\
0.6449595684306472787028f,0.0894809955848772375919f,0.7875272110120042912129f,\
0.6395838526894777054110f,0.9866156703762346547038f,0.6950451267922697073942f,\
-0.3412708317791682266495f,0.3938437014688686566011f,0.6077873470346980555590f,\
0.8947232532371431901197f,0.405621261011146261311f,0.2863729991092465732017f,\
0.6408409897588510650834f,-0.2307152077489570130009f,0.8647651606784810818240f,\
0.9999988695715007480658f,0.5901815182487093469632f,0.9921435633684139165922f,\
0.6980676864202854936536f,0.7117823002210422744795f,-0.5976582378696937425389f,\
0.9112318735935986957486f,0.8880403834946687391394f,0.7589472311619362976387f,\
-0.8169954127513406882954f,0.8683238289487801297994f,0.7340391936884439472166f,\
-0.1211287602524158124595f,0.7298432754851863490941f,0.9840027922687679673430f,\
0.414135922956764768177f,0.9373998379717353168772f,-0.8495842484392269744475f,\
0.8951497493851807707443f,-0.5086089166239101677647f,0.9637681122030780089815f,\
0.8428117284541520870533f,0.9983402269892645009008f,0.9395740596053013815592f,\
0.7998698514817192961601f,0.4371360854041511645462f,-0.1358071578606558360569f,\
0.8564769211630707257399f,0.0921370549444396474970f,0.1069973881579713986811f,\
0.5464696941763740323239f,0.7603174194154225240538f,0.7486968394521967828936f,\
0.9954133840567818136691f,0.9392842830606296100626f,0.7281251176521188472890f,\
0.8788251271401545938744f,0.4100551583355765972172f,0.9593354263834207307227f,\
0.8767558837388640391453f,0.8169958925140410332943f,0.6414617938312918710153f,\
0.8189107275146941811172f,0.4287832557249183773607f,0.7778082340710044118026f,\
0.4565162294470550552461f,0.9343210101535780465198f,0.9785245037094734144034f,\
0.8547068075395470865274f,0.9977453410917197507146f,0.5977527578720709389160f,\
0.1510966938752993093953f,-0.3923250465140346587845f}

#define CSOURCER {0.8652785065984375245662f,-1.3368838685782120645484f,1.6264408224927449087005f,\
-1.8690897079220740728545f,0.9951518628175756164822f,-1.688893672224414332916f,\
-0.7497508971113807652031f,0.8268999681758193442960f,2.2753757356206412154620f,\
-0.3872960166494098244172f,-0.0799160908491712979052f,-0.1884631346495315440404f,\
0.2094439405660133701748f,0.3401928613448036986533f,-1.2494684410199645707706f,\
-0.2979401746978811993394f,-0.5157853813810977516852f,0.7932915899466403963913f,\
1.5620570356415210966361f,-0.844359823617092053460f,-1.0437648196696975855247f,\
1.932990034770735388037f,0.1853438341489616059121f,-0.9962801836788344189699f,\
-0.5388351087532706751304f,0.6070505636662814064053f,1.5888625026588754085566f,\
0.2617832537783132407228f,1.1970490473872079650874f,0.12578128394682370f,\
1.39770280807620150831f,0.2099988595145213798876f,0.3421775699723230701466f,\
-1.8782261453279518459425f,-0.6664189835307311460255f,0.8127373993936040097452f,\
0.3767873922208855863580f,-0.6374952135371538819442f,-0.974468710244571822976f,\
-0.6722228555627711710230f,0.8585099013504803311392f,0.2446046980188737729467f,\
-0.9043973313471151964649f,0.1358880163960933251666f,-0.7695067786636404782996f,\
-0.8938327489087023458580f,-1.9114553148531847615033f,1.0171770494404650531095f,\
0.1835886481619793952902f,-0.3163377812153213564095f,-0.9195862784206330076131f,\
-0.1072018571251609070361f,-1.7348283435296543153470f,-1.0280015900042309695550f,\
-0.1045837022850216735392f,-1.5256722999247080974072f,1.1084725864612092749439f,\
0.6805135215035358342561f,1.6689686098271181435848f,0.2989927467898484958475f,\
-0.5006434061857586437227f,0.7116857998261418849495f,0.2485278541920327155523f,\
-0.6900291112600369647367f,-0.6267355965803992345897f,-0.4282667464892624953343f,\
-0.7336468298863978443336f,-0.3574021092257179676999f,0.2860336762162377644003f,\
1.1425687805503488281289f,0.6919758815746888114262f,0.8010668577124011591195f,\
1.7767980155474207837329f,0.197833004692656910795f,-1.8362538605563030191803f,\
0.3869279168511000066566f,0.5325960336459322208569f,0.0883113910959548165103f,\
-2.6418732644466236259007f,-0.6564988101863107328171f,-0.5566003466732061255584f,\
-1.479779603028395396080f,0.1430519638431400619716f,0.4320971393139262928251f,\
-0.3181852113191626640898f,0.5371570151959671468589f,1.4535234978041589037900f,\
0.3101271616559506116850f,-1.340732344843439172166f,2.060471964067395411746f,\
-0.0787601433757613156317f,-1.0771984898755455617447f,0.5648344207720079612756f,\
-0.3508614616179664413842f,-0.9690830277765453137917f,0.5156195652795886319453f,\
-0.5293387239139798472465f,-0.9571359764302782568990f,-0.2269082544310593585468f,\
0.4895059752188103407988f,-0.2522128725839323237778f,-1.4975804078553673903684f,\
-0.1603766798935232218426f,0.1464267186008629817451f,2.1615853347433549025425f,\
0.0399126120226646896594f,-0.5544284809990485118902f,0.5328414558183197646812f,\
0.3907850242802237139550f,-0.3787774013072854883966f,0.8417359908290755754479f,\
0.3176700186731257757877f,1.592244506660871694592f,-0.9951932381029318097632f,\
0.0410951006109449151760f,-0.5188832355843150390129f,-0.4767385649438746209050f,\
-0.3777777846485093071749f,0.7910209775449256186519f,-0.7086741723196363640369f,\
-2.3537808974280172158444f,0.3583714955858253170540f,-2.508952017613233387294f,\
2.087806522953977506063f,0.2382312089001768218299f,1.9833918106929020463980f,\
-2.167582574594525635092f,-1.401225926702102553278f,0.4640426253451597760069f,\
-0.3076759844353880168910f,-0.7615259380675128975113f,-1.1385700743993105721330f,\
-0.4270402705994392755784f,-0.0367498239842839885538f,-0.9128849844856976591956f,\
-1.9549432857416617626001f,-0.8811112725878604834406f,2.9821802878266292502474f,\
-1.7022507648063245344616f,1.2487885639051212738337f,0.0676735499770482057391f,\
-0.2367248998667950132813f,-0.5285347231086527930444f,0.7141648125067473484862f,\
-0.5878970571029352720771f,-1.1459325979718588683909f,0.4680548872241794833293f,\
-0.6843012596069305564228f,0.5355357649056337043803f,0.1540760632792411710668f,\
-0.6157450195036280327088f,-1.41787024661118454816f,-0.4570344170862304378211f,\
-0.1411796126420029884319f,-0.6614438004746325816541f,1.5436797442842080663183f,\
-0.0655012358215935341921f,-1.0114218055676069685234f,0.1895887411932805077797f,\
-1.2984646974992717360919f,-0.5015613008687210827574f,-1.162209366222186623929f,\
-2.509167640329787563047f,-0.4405707024000362626026f,-0.3943332184880063984167f,\
1.2805404560028668115024f,-0.3061569333239507750832f,-1.1420665340809226240282f,\
1.0167026164121319986577f,1.958453071130288769552f,-0.8471715882458593638304f,\
2.5258191429986913689731f,-0.2048087265120654143491f,-0.4182027716366760183853f,\
-0.3527210857802417498519f,-0.5595241893671244470809f,-0.6478265699785845654901f,\
-1.0507861982209916185127f,0.7848448646063929112771f,-0.1328983392812562724927f,\
-0.8579290931640745077047f,-1.0403775604411991118070f,-0.0520608986196072903718f,\
1.276568442453563045902f,1.4203725991168176800983f,-0.1287251249804796937592f,\
-1.959471210760952208929f,0.3404865901494299462726f,0.3700863012564228338164f,\
0.9399888255640819201275f,0.4874471402488251836616f,-0.9277526481559981164082f,\
1.4687996535197915815019f,0.6577767757776173951356f,-0.2596038157216366548674f,\
1.1286217610308955094922f,0.0284581900701165874112f,-1.2794761544488175708523f,\
-1.1137434890242723373177f,-2.2955389951107569856958f}

#define CSOURCEI {0.1918412521642277324130f,0.4822328106056159024995f,2.4722523083922975928317f,\
-0.1999085627658134245443f,0.2290361675784305939274f,0.1385769022152809337722f,\
-0.1308449665803144978948f,1.8188246235702238973175f,-1.360744719214450615397f,\
-0.8851525561710794631765f,1.8831231089443882797951f,-0.7390687967111120304509f,\
1.1162950684058663419762f,0.5417636328738030249141f,0.9074880499974204983715f,\
0.1136822955664789497332f,0.5661113725007503871822f,0.7795296942845783005893f,\
0.5870328147250098993482f,0.0887163653774847987821f,1.3588131422838234385608f,\
-0.7770801239208607880116f,-2.1816983571681287656929f,-0.6867928574771322569603f,\
3.132774112529277399375f,-0.5876856927977032185595f,-0.5468023513790022383f,\
0.3644381766801820243806f,0.9444714440193706650462f,-1.0355805625638589972937f,\
1.6339838311734231623973f,2.3222150378340997711746f,0.7603859366849585743608f,\
-1.7528561088374936538514f,-0.2830657824851525727894f,-0.5082187590533610022092f,\
1.2854936372804377509027f,-0.1071924175739472628877f,0.0680608377011317072780f,\
1.2478214718780462622050f,0.2022362844423137018257f,-1.1601145695370460586560f,\
-1.3732471859884713971667f,-0.0871747108156779304533f,0.3318121744832343011922f,\
0.813877556086732623086f,0.6766249185129517007553f,0.2594423975862346631871f,\
-1.2199874507987620297911f,-0.9897424388234272729648f,-1.5501341727479884813334f,\
1.3236241898041882780745f,-0.6342132090900320928739f,-0.4029346079915554490469f,\
1.3618162247590774871497f,-1.2268551088323862430229f,-0.0165544865341302541162f,\
0.4697449293077746168557f,0.5129232238932224241523f,-1.2864890116754716942182f,\
-0.5815154649104360418121f,0.0042198993973377365435f,0.4217149352171605802830f,\
-0.3269590438815029309616f,-0.2713027722538356445448f,0.9981558319993941719162f,\
-2.0584511427735407984585f,0.6360071281896889638929f,0.7792532924825519291545f,\
0.8152290078526440719742f,0.302690835462471330430f,0.7846292874622610158397f,\
1.3471935456922272678071f,0.0235796939592457371893f,0.8341783427284864549378f,\
-0.8042305059271110945218f,1.2811212643144183065402f,1.109535684815037281936f,\
1.5542750631114032877633f,0.2918299696375577512164f,1.0694551283559152743408f,\
1.2577061015533308463432f,-2.904044346742185922494f,-0.2870782813229341146055f,\
-1.2760057024544790849063f,0.283985753428556031430f,-1.3175328345022150333676f,\
0.8988284250430720323521f,-1.8112538507045783386928f,-1.0995994665801063217003f,\
-0.4449820788080595668212f,0.5855247264136794749234f,-0.7093745947817804431423f,\
0.1905828492221817993535f,-0.5445080014401588730522f,-1.365437721272832805042f,\
-0.6751146881456216997108f,-1.1868018509166287088874f,-0.8652762231421259331299f,\
1.3117247998219794258290f,-0.2796512899932403484193f,-0.2218002038379895402009f,\
-1.9751109128000410297687f,0.1122673197507930292760f,1.2555755229270146866583f,\
-1.9515162530964744735940f,0.1977614186013104402573f,0.2974354172914404070838f,\
-0.4957061458086293725955f,-1.5054836292812976417110f,-0.6943524973783626874635f,\
-0.4602840002479897663079f,1.3936515683502606055555f,-0.0740340331806867979481f,\
-0.6177784175603027172485f,-0.2145874798022777973916f,0.8980342752260660477148f,\
0.0337374057866826476682f,-1.1446268541982025368497f,-1.2555511561156762478930f,\
0.8386583904487018292784f,-2.446562477109361033456f,1.5119860122449106931697f,\
0.1869337784232076582480f,-0.3349553867803892748256f,0.131542782393392315710f,\
0.0174597275898690194873f,1.778529610135566318974f,0.618702552545296935449f,\
-1.6771343167918386640736f,0.7435693095206714620105f,-0.5379787827929278787309f,\
-1.5913674625260130213178f,0.1780898508541619018608f,-0.25671563034338790166f,\
-0.2862788634729842573989f,-0.4906498481756356722094f,0.3900012521547605026662f,\
-1.84205336065016078706f,-1.5234366963806009742655f,0.2365255965998115661453f,\
-1.7320610820689275044515f,-0.2834038205636343343841f,-1.5009852265404577398300f,\
1.7422292049682128745047f,-0.2436614706579122158203f,1.0689605525655874185276f,\
2.3690635117400145048805f,-0.1930577380634317663510f,0.2735573868128330365934f,\
1.5569516288681788385162f,0.7150292123422491430418f,0.5468099984878278529976f,\
-1.5473048247641658647922f,-0.4396944448158471852039f,0.3112403247843043563314f,\
-1.26537605009678144619f,-2.3950841704590355440985f,-0.2592078718414222993083f,\
-0.4387845364322502383914f,0.7187054098642295940635f,-1.2095433748027486497989f,\
0.1746582197927172008800f,-1.1207357315790709151315f,-1.2331864421831437717003f,\
1.040361177077658849655f,-0.7973568364198504454521f,0.4368277956791839500283f,\
1.3732228487397339922182f,-1.520585040532598242180f,1.0844121210894082096843f,\
-0.6034908039898051468342f,1.691270204422151035573f,-1.0147637811434373489305f,\
-1.543831005555790003569f,-0.1908715944289217369967f,-0.9777526617402377828725f,\
-0.5011593951678696701180f,-0.6581745867398813842897f,-1.222568274664002307972f,\
0.5739764929054486097826f,-0.8178919175936580909791f,-0.0839772392176704185474f,\
-2.2467727407263837768880f,0.5311634003342166066020f,0.0127028917577170375602f,\
1.4336465735979566638036f,1.140130846486164140074f,0.7078292602873598182711f,\
0.6419172762011019495176f,-0.7752020495699509794463f,-0.2227250211522007472542f,\
0.1418062472773869153730f,0.3461143754334283229035f,0.9346610138588777871860f,\
-1.1766714696487656777180f,-1.155321545637316260624f,-1.0348373990480448370022f,\
-0.4377198927182634480282f,0.5342901632756290597470f}

#define CRESULTR {0.6603968316049805276080f,0.2592621892570787789367f,-0.3318454617138371642859f,\
-0.2997813790812504652905f,0.5587163403231363290047f,-0.1189561420345783687713f,\
0.7381324458324397541631f,2.142136719995466176414f,-1.3458078751828295160919f,\
1.3129764303388649082649f,3.3523257180963095258619f,1.2630048090441925445759f,\
1.6535623505413692413413f,1.0844508507590295831591f,0.4550473771130031930277f,\
0.9621269818830543441024f,1.013062998048058771516f,0.9256575460351638140466f,\
0.0102887155976816024872f,0.6668255580964917994535f,1.0432946799591633624260f,\
-0.4668000327046901709593f,4.4102457143090099123128f,0.6767097030615227826189f,\
9.8624279257033951040512f,0.9672974379596046556884f,-0.0208338391589294388839f,\
1.0307881917288705952984f,0.5404196044618572170037f,1.5733521090107187578866f,\
0.4580812522816201659559f,5.0350486020971887413111f,1.2277369531593618212639f,\
-0.8994082908263842934815f,0.8177424613018864363312f,0.7782283917530580241717f,\
1.8099404305650070856615f,0.8082102149385829159556f,0.5629089875114635654896f,\
1.4748501127652635656062f,0.6669768846821123586821f,1.699726699407153374111f,\
1.298577834389474938703f,0.9945484939786765066216f,0.7581576733086236030701f,\
0.8456096567246286221931f,-0.4135520032774342991111f,0.5435636589621466452371f,\
1.810248147243165517395f,1.4551350063240526822028f,1.4924370356604863552263f,\
2.0000431078502241000194f,-0.1972543510483453221838f,0.5590324784918681011447f,\
2.068372118994307395923f,0.0835345805491203158288f,0.4460902185747692705320f,\
0.8645923158579836842463f,-0.1111931823350623821378f,1.8617144830169030100819f,\
1.02983082411914805832f,0.7572686801513547338871f,1.0567502136654132183224f,\
0.8128189945963255613748f,0.8399378223031567225476f,1.4017511305320988768131f,\
2.956644273924759147576f,1.132754400798835492381f,1.265693867178816711672f,\
0.5610629520868651853860f,0.8055306977755860575741f,0.9213852223586275203004f,\
-0.4199962882323669544071f,0.9807673830270958736932f,-0.3590470367287647013299f,\
1.2420524197984359471292f,1.6706050779946230999684f,1.6747789118158156185245f,\
-2.16927668845889520810f,0.8261050353521025568782f,1.3826822282594428692448f,\
0.1727680624199215975167f,9.057823043102500193413f,0.9457668311290795548629f,\
1.833812877114292083647f,0.8940453644463330906689f,0.2341249670166324903242f,\
1.363576337757532064288f,0.7162232362688260023376f,-0.7845189065148089335722f,\
1.097237008647440115183f,0.5573625517969845732935f,1.0662662205819704031029f,\
0.9561831479074293094200f,0.6520642360884429944434f,1.8151009640860991112277f,\
1.0674278234021243871865f,1.0313090898160910402481f,1.3624555698791520619295f,\
1.757155073751679230654f,1.0064753136983999315390f,0.0749572440340378898238f,\
3.6259465360107721032534f,0.9955398364095786600814f,-1.0568745874589622336f,\
3.5878460752889553830869f,0.8668812254131966765769f,0.8997505054992860351604f,\
1.040555384796898463762f,2.1965462296781987916461f,0.8333142225488954224488f,\
1.0523855335407785727142f,-0.0458709738274477793474f,0.5458332569596060501738f,\
1.195961273756254605871f,0.8884437146730177481402f,1.2715015087988947861675f,\
0.9300156339115848158627f,1.2162605499523735375078f,1.4405129668915395146911f,\
-0.9683533444224800001976f,5.4479898316980985839564f,-1.9178644985834492064924f,\
-0.5029446665597729904107f,1.0267816742413071740003f,-0.4044626121435637711166f,\
-0.5620727987859718277619f,0.5138734552212488315703f,1.0709367349326839313761f,\
2.6385439370616894372290f,0.9332628709668898681073f,0.4809878535892211925962f,\
2.3274184357315248483644f,1.0152140200890447108151f,0.6317250697033859330176f,\
-0.390230756302790915413f,0.7144330074150475606842f,-1.0633635201019895344388f,\
-0.4238985166974506557658f,0.7604701169947127858961f,1.0257495217324759106958f,\
2.8333209029821588842424f,0.8984586856426056700187f,1.7791621377373312284931f,\
2.4485583447413197255571f,0.4244935342539479794510f,1.4527777983860266086680f,\
4.1768674382240673637057f,0.8760717584983536143639f,1.025358467451832122919f,\
2.0225373659775809365158f,0.1929591577071132768584f,1.0348979760988403775457f,\
2.4313713775277490114490f,0.8666224950927583492444f,0.0284371329577691699109f,\
1.9091763626738669223926f,2.934604495210217045553f,1.0152593733387236252241f,\
0.2952893892910067874524f,1.1132087589342971600814f,0.7251532821639393722180f,\
-0.8189305685602711326609f,1.5345662883929571673747f,1.7188713168135731912400f,\
0.4555641729620423796554f,1.273008943337736509349f,0.4560137683691281029752f,\
1.1053164018215166919390f,-0.9060167575034622222674f,1.0910838839542402745053f,\
-0.9695473009615381831949f,2.7466955042474223702698f,1.4261078323829836644876f,\
2.297318046615583586600f,0.8629928731306283351543f,1.2099030156571450866920f,\
0.5606054313387058840590f,0.8663522170995916482639f,1.8289146898108739058841f,\
0.7647265415048952741373f,0.6847484857113015355168f,1.0021685183539132957264f,\
1.3866261204365910586489f,0.1714987437851132057176f,0.9918063704778133926609f,\
-0.8398571556569223162114f,1.624536447087556512159f,1.17576217917109437927f,\
0.7155426268638502840247f,1.1625689563760244205071f,0.6145684296686997338810f,\
0.1028453801776162412907f,0.8392286126386587774562f,1.4202930257299617444744f,\
0.7599315975784372012569f,1.74429364867563263530f,0.4552293130713663815712f,\
0.4842614797058485409664f,-0.759839135565466450295f}

#define CRESULTI {-0.146941580724984616202f,0.4874941601771347610139f,-5.8732506000776529830887f,\
-0.1923557391894928081388f,-0.1938092227520436805488f,0.1380525220047903456333f,\
-0.0894197912409416678647f,-2.2083871916990625017263f,1.38762940282270652581f,\
-0.379707247416236348680f,0.2563331150684992620903f,-0.1514182976925468326890f,\
-0.2833925825567581990860f,-0.1897432487381172094842f,0.9841855659814751078329f,\
0.0334435644614089755411f,0.2943712296517632109882f,-0.6135431940236653058918f,\
-0.6213108038265401367184f,0.0664065988188502348555f,1.5707022449109617756591f,\
0.8020378110570226537490f,0.8061058304221635495423f,-0.6229364595259883063960f,\
5.873854580840536243613f,0.3548772564844954735541f,0.5743671991358663131422f,\
-0.0964195772855189620065f,-1.015948375800173053563f,0.1544112964905340057431f,\
-2.427720301875694985938f,-1.0527358981959802353146f,-0.2804463002040958885530f,\
-2.667664304679369102757f,-0.1773304122311009645152f,0.3851475525760940099573f,\
-0.6144403782537597447089f,-0.0639215126270850642065f,0.0563572709924226103451f,\
0.9949983775946195097006f,-0.1541120072724549983079f,0.3483472405495082191429f,\
-1.4521802331617248427165f,0.0118245383836800051908f,0.2351284238449595775933f,\
0.7067939417094389886742f,0.6875306193270583898780f,-0.2231728770983253673510f,\
0.2822282491943420845715f,-0.3606863345205877369182f,-1.789492973412827536706f,\
0.1867542931864467348202f,-0.6684973125435003105110f,-0.3544323112754915183764f,\
0.1903651481757896168912f,-1.5570503331148395353978f,0.0148172477875626266292f,\
-0.3065501441038122609761f,-0.5331323204569118345830f,0.4924734236714592428008f,\
-0.2951210995789439461845f,-0.0027560721209946860942f,-0.1068344484336290478588f,\
-0.2118570413928013151939f,-0.1610793407630224660654f,0.4868738628243398092188f,\
-2.579960937463402714798f,0.2378086541486917060428f,-0.2428029308169650513083f,\
-0.8265359232776167131007f,-0.1960976284506159017518f,-0.6230605514253650945022f,\
-1.755406116186124965139f,-0.0046349019875992188491f,0.9016172621635419881514f,\
0.3372605888766848636351f,-0.8436494304870341132130f,-0.1192082555849750258314f,\
1.0830200228715931576318f,0.1806566116072005345750f,0.6790264707808069122308f,\
1.609828137915977341876f,1.2968382390971706641380f,0.1218796661012466753249f,\
-0.5166846594494688416077f,-0.1472753279361777856149f,1.7212963380251158351797f,\
-0.3127599294310591804269f,-2.89888504993117113173f,1.1780998114195078141364f,\
-0.0361775267207019371463f,0.5456053298268405127303f,0.4123679880285295307196f,\
0.0659019050150095875296f,-0.4713866341281334748636f,0.9028599597514885832794f,\
-0.3674007976866919822356f,-1.2146233237644410429823f,-0.2198736582857065691154f,\
-0.8094828887322721433506f,-0.0706994284778254822310f,-0.2230241649514515533959f,\
-0.5643984283124198197967f,-0.0164146852495472492239f,-1.3391611472776376867699f,\
0.1376079760459386902571f,0.1047929421413649753170f,-0.1533297870650806860038f,\
0.1966501815957944765412f,-0.7921571860524847519258f,0.5604745942609183906313f,\
0.1489022072975806909589f,-1.8902500881495403195487f,-0.0621612461401919516590f,\
0.0270260228763795351536f,-0.1072348104191992446133f,0.4697601544599027123539f,\
0.0124466007411300864927f,1.0036512376933612866736f,-1.049412060795365198018f,\
0.6666269392002136529030f,2.010144371510963257066f,1.2757551800142050701936f,\
-0.1634497680436179101182f,0.0805305413426501415231f,-0.1208519512813724661182f,\
0.0144424770778995917309f,2.8348773781599185817015f,-0.2949185744370810824400f,\
-0.7818376664535492404084f,0.5616872313168002062156f,-0.5124110438039969350754f,\
-0.9747306641614861266731f,0.0065779403553887496811f,-0.205370183808804979142f,\
-0.269054670595636091779f,-0.3938808526857590086578f,-0.0634893958645683514908f,\
-3.0489600352607997280074f,2.072697136598120604134f,-0.0161438616695122189038f,\
-0.6420425137334005993850f,-0.144832386550082847787f,1.3961681016866522853093f,\
1.534869934827646220654f,-0.2242019675630647912445f,-0.5795004710241905554469f,\
3.3483419852888491874410f,0.0991308462877908275201f,-0.0425076535895645771235f,\
1.309216767461068409162f,0.7684601350295457988793f,0.2535070961278987344834f,\
-0.3156127379694732559834f,-0.278872470151356244283f,-0.3161734445550384298151f,\
-0.106765701893629952335f,-4.6100082079818358593570f,0.0493978828262259944681f,\
-0.4363059774746961272385f,0.3760761368145200678192f,-1.4011279329067940491171f,\
0.1037666142610354780285f,-0.5844725415055048722834f,-0.6033334328120393275086f,\
-1.1866522252940947534938f,-0.2666075239397875384917f,0.4100487177769164826024f,\
-1.570972740050773142073f,2.0165334475753500242945f,0.9815781508770222707483f,\
0.3701172711568467832421f,0.5330671903876023076663f,-0.4865756887562372456912f,\
-0.7719024118076073248673f,-0.101927682205751976574f,-0.6886382760934363078675f,\
-0.4533487312581489514507f,0.4994598581237761347751f,-0.2054810163364952091403f,\
0.4584447177031794051771f,-0.7868410449880314239124f,-0.0043750939988532102504f,\
4.4747804523350742655907f,-0.5502105833706960602569f,0.0016307130557308498371f,\
1.83024619927524345719f,-0.4687597592810309743427f,-0.2779394557997144632466f,\
-0.5547224826362566751925f,0.400556327585974369931f,-0.1797184375596841132694f,\
-0.1415425280521077078255f,-0.2158502978608074218680f,0.2764160437046866980459f,\
1.326476685000083532984f,0.0406909700160508550071f,-1.1778701919064038516893f,\
-0.4054547584096580559176f,0.419311934137157338309f}


void scossTest(void) {
	float in[]=SOURCE;
	float res[]=RESULT;
	float out;
	int i;

	for (i=0;i<200;i++){
		out=scoss(in[i]);
		assert(( (fabs(out-res[i]))/(fabs(out)) )<1e-5);
	}
}

void ccossTest(void) {
	float inR[]=CSOURCER;
	float inI[]=CSOURCEI;
	float resR[]=CRESULTR;
	float resI[]=CRESULTI;
	floatComplex in,out;
	int i;

	for (i=0;i<200;i++){
		in=FloatComplex(inR[i],inI[i]);
		out=ccoss(in);
		assert(( (fabs(creals(out)-resR[i]))/(fabs(creals(out))) )<1e-5);	
		assert(( (fabs(cimags(out)-resI[i]))/(fabs(cimags(out))) )<1e-6);			
	}
}

void scosaTest(void) {
	float in[]=SOURCE;
	float res[]=RESULT;
	float out[200];
	int i;
	
	scosa(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(out[i]-res[i]))/(fabs(out[i])) )<1e-5);
	}
}

void ccosaTest(void) {
	float inR[]=CSOURCER;
	float inI[]=CSOURCEI;
	float resR[]=CRESULTR;
	float resI[]=CRESULTI;
	floatComplex in[200],out[200];
	int i;

	for (i=0;i<200;i++){
		in[i]=FloatComplex(inR[i],inI[i]);
	}
	ccosa(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(creals(out[i])-resR[i]))/(fabs(creals(out[i]))) )<1e-5);	
		assert(( (fabs(cimags(out[i])-resI[i]))/(fabs(cimags(out[i]))) )<1e-6);			
	}
}

int testCos(void) {
  printf("\n>>>> Float Cosine Tests\n");
  scossTest();
  ccossTest();
  scosaTest();
  ccosaTest();
  return 0;
}

int main(void) {
  assert(testCos() == 0);
  return 0;
}
