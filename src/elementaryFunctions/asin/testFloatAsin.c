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

#include "testAsin.h"

#define SOURCE {0.9356911443173885345459f,0.5202743173576891422272f,0.8356943717226386070251f,\
0.1390841729007661342621f,0.1484344247728586196899f,0.5062630889005959033966f,\
0.6569615425541996955872f,0.1527653667144477367401f,0.2077333852648735046387f,\
0.1310311132110655307770f,0.2355898572131991386414f,0.9000837444327771663666f,\
0.0360118653625249862671f,0.4438733388669788837433f,0.2795370602980256080627f,\
0.3609029497019946575165f,0.0737524814903736114502f,0.8877843604423105716705f,\
0.7357059037312865257263f,0.1533541432581841945648f,0.2168745566159486770630f,\
0.7783402544446289539337f,0.6990017639473080635071f,0.6133037763647735118866f,\
0.1271589249372482299805f,0.3196897902525961399078f,0.2413121340796351432800f,\
0.0203057392500340938568f,0.8844696115702390670776f,0.7514050160534679889679f,\
0.8791579911485314369202f,0.3137878845445811748505f,0.4495223872363567352295f,\
0.7199412197805941104889f,0.8987670382484793663025f,0.1432229257188737392426f,\
0.9059501979500055313110f,0.4684562650509178638458f,0.2573188217356801033020f,\
0.5960337105207145214081f,0.9504154697060585021973f,0.9387393021024763584137f,\
0.2791117234155535697937f,0.4469828694127500057220f,0.5995192881673574447632f,\
0.3789988537319004535675f,0.8654018277302384376526f,0.2727968390099704265594f,\
0.5822574533522129058838f,0.5512602762319147586823f,0.4366636639460921287537f,\
0.2757742605172097682953f,0.3867734093219041824341f,0.1321225953288376331329f,\
0.3260228233411908149719f,0.1601287531666457653046f,0.4301580488681793212891f,\
0.4006247171200811862946f,0.8426104513928294181824f,0.9048160626552999019623f,\
0.320046393200755119324f,0.8069710140116512775421f,0.7235896149650216102600f,\
0.7765955845825374126434f,0.6767611466348171234131f,0.5158662856556475162506f,\
0.1936035444959998130798f,0.4270762628875672817230f,0.4847531262785196304321f,\
0.5182100948877632617950f,0.3503957511857151985168f,0.4174968632869422435760f,\
0.442088566720485687256f,0.4049004786647856235504f,0.0953520191833376884460f,\
0.0149906217120587825775f,0.2767332997173070907593f,0.396497034002095460892f,\
0.3277142727747559547424f,0.6040842677466571331024f,0.4983838088810443878174f,\
0.7224933789111673831940f,0.6212163185700774192810f,0.5571814230643212795258f,\
0.5545951593667268753052f,0.9439489883370697498322f,0.1018914626911282539368f,\
0.9077803748659789562225f,0.8599558025598526000977f,0.3132304050959646701813f,\
0.7458020029589533805847f,0.6701762243174016475677f,0.6670592557638883590698f,\
0.7646118258126080036163f,0.8154405960813164710999f,0.1493974099867045879364f,\
0.2480226568877696990967f,0.6294850618578493595123f,0.6535534998401999473572f,\
0.0851266062818467617035f,0.3553021941334009170532f,0.6699288752861320972443f,\
0.5531356902793049812317f,0.9733559968881309032440f,0.4305554106831550598145f,\
0.5243876897729933261871f,0.9223478538915514945984f,0.4095269232057034969330f,\
0.5303003843873739242554f,0.1592096765525639057159f,0.4631052548065781593323f,\
0.7969039077870547771454f,0.4371217824518680572510f,0.4197942153550684452057f,\
0.5820884769782423973083f,0.2639330527745187282562f,0.9251737911254167556763f,\
0.2750987303443253040314f,0.7529260413721203804016f,0.1343348133377730846405f,\
0.6487299203872680664062f,0.8492549010552465915680f,0.0482988981530070304871f,\
0.7936811461113393306732f,0.6225296836346387863159f,0.8340442483313381671906f,\
0.5607167938724160194397f,0.2962070326320827007294f,0.7626721523702144622803f,\
0.3759830952621996402740f,0.9307165136560797691345f,0.5556063777767121791840f,\
0.4568063858896493911743f,0.0317669031210243701935f,0.7012319983914494514465f,\
0.4635622831992805004120f,0.6323687359690666198730f,0.8858239823020994663239f,\
0.7168863369151949882507f,0.7797616957686841487885f,0.2916170265525579452515f,\
0.4237285782583057880402f,0.28695563320070505142f,0.1371444310061633586884f,\
0.9822116084396839141846f,0.2552233324386179447174f,0.3307547485455870628357f,\
0.0061365715228021144867f,0.1720932889729738235474f,0.2806011182256042957306f,\
0.2241949187591671943665f,0.9616182404570281505585f,0.9974081367254257202148f,\
0.3941962518729269504547f,0.5662632463499903678894f,0.0963757499121129512787f,\
0.3522291611880064010620f,0.3187350784428417682648f,0.5841740677133202552795f,\
0.9247881243936717510223f,0.7888248674571514129639f,0.6642959327436983585358f,\
0.3959421953186392784119f,0.6204979992471635341644f,0.1972246859222650527954f,\
0.8056284752674400806427f,0.8491280348971486091614f,0.9318168940953910350800f,\
0.7328312769532203674316f,0.6715824031271040439606f,0.1545045776292681694031f,\
0.6186148612760007381439f,0.9608297105878591537476f,0.0403955359943211078644f,\
0.0333962673321366310120f,0.7544445092789828777313f,0.6861435212194919586182f,\
0.4345912770368158817291f,0.5974397426471114158630f,0.7376494011841714382172f,\
0.4376876372843980789185f,0.2092354488559067249298f,0.6795164542272686958313f,\
0.3552068280987441539764f,0.0756681859493255615234f,0.9273025044240057468414f,\
0.8346071569249033927917f,0.743054957594722509384f,0.4906791727989912033081f,\
0.6159011130221188068390f,0.7293182769790291786194f,0.5866543571464717388153f,\
0.8633460365235805511475f,0.9971091211773455142975f,0.1388301542028784751892f,\
0.4055338925682008266449f,0.4532660786062479019165f,0.2871678886003792285919f,\
0.2700171591714024543762f,0.2655710014514625072479f}

#define RESULT {1.2102129173972693276795f,0.547172134283395505960f,0.9893959167427971435060f,\
0.1395365387198562734383f,0.1489849714320161666592f,0.5308459929384929942842f,\
0.7167814580056727224999f,0.1533658822581816516539f,0.2092572247647190852859f,\
0.1314089889300391889027f,0.2378254645317898763324f,1.1199616760260284742401f,\
0.0360196535997655206685f,0.4599165600749937077296f,0.2833119142414158297960f,\
0.3692359156088362848180f,0.0738195075749003143395f,1.0925087004242901578266f,\
0.8267083221396219760990f,0.1539616791242165161346f,0.2186116813912043488344f,\
0.8920178989455170848188f,0.7740006423727355810982f,0.6602366372124121030041f,\
0.1275041230444604323235f,0.3254020787470935927033f,0.2437177159295554063068f,\
0.0203071349297229801489f,1.0853560691206285415689f,0.8501888295310906507041f,\
1.0740923528156336441697f,0.3191797921431215878663f,0.4662305874507110536875f,\
0.8037176217662085342397f,1.1169491151572188414320f,0.1437171522303946902266f,\
1.13361865210398771175f,0.4875426458125770023955f,0.2602465647055824948808f,\
0.6385524103330081358010f,1.2545691699775671779093f,1.2189537472935179085454f,\
0.2828689457902803794376f,0.4633896660240007236986f,0.6429003543060739511716f,\
0.3887142006801726501486f,1.0459517428704359076619f,0.2762989388590115780175f,\
0.6215026189895035413358f,0.5838740042814533071081f,0.4518867349636846997285f,\
0.2793951051102595561915f,0.3971301217078890832823f,0.132510043706192570667f,\
0.3320934649289025153429f,0.1608210878711773539340f,0.4446678438400747945813f,\
0.4121985697961437211667f,1.0021124190562762379386f,1.1309475449498487265032f,\
0.3257784557613874198978f,0.9390052579549887923349f,0.8089888457708835911575f,\
0.8892438326422247296676f,0.7433542835357417333242f,0.5420185672225497075516f,\
0.1948338635337260038582f,0.4412568471414960447063f,0.5060808916267004464729f,\
0.5447567844134539871703f,0.3579936097184594490095f,0.430688870641149468277f,\
0.4579258061456900619213f,0.4168699854700866902490f,0.0954971037836137986998f,\
0.0149911832144437959929f,0.2803929768115001053275f,0.4076979699824179737000f,\
0.3338832266123987202455f,0.6486162776185823153341f,0.5217335620683097863193f,\
0.8074019476106287784845f,0.6702938912826584827442f,0.5909876416606805182852f,\
0.5878763702657983092337f,1.2343959660274554934745f,0.1020685954711661458383f,\
1.1379615773910940479396f,1.0351830670880448614923f,0.3185927153117306676045f,\
0.8417379366997205236700f,0.7344461964462585257252f,0.7302544939241956134524f,\
0.8704388193816158247884f,0.9534899570984974870314f,0.1499588151786827583400f,\
0.2506386006706501912156f,0.6808903181988129604818f,0.7122699052095804450602f,\
0.0852297552133160912780f,0.3632373356223638216633f,0.7341129828114539845885f,\
0.5861234773434839118167f,1.3394387326603169885431f,0.4451080564403126493822f,\
0.5519958405399131295965f,1.1741139184516546922765f,0.4219354466987135787726f,\
0.5589548324277814339567f,0.1598900667546140630382f,0.4814956074594635149211f,\
0.9221526721268241688634f,0.4523960307711298312050f,0.4332185780481620507310f,\
0.6212947925772885904294f,0.2670975836918499934924f,1.1814932336008394653248f,\
0.2786923935221553016994f,0.8524970032637724237645f,0.1347421608080361932203f,\
0.7059143267628599227592f,1.014572470500166190277f,0.0483176963724658639632f,\
0.9168365263416731192336f,0.6719709888964939814571f,0.9863981265157644173769f,\
0.5952512315907774187451f,0.3007190162077965633891f,0.8674345484889434132469f,\
0.3854574865641427483531f,1.1963670583888645904125f,0.5890920941092092633085f,\
0.4744017948433008613485f,0.0317722484037002914081f,0.7771241013419247778415f,\
0.4820113338532510671719f,0.6846071548899330672100f,1.0882667543007658040f,\
0.7993259845681112141236f,0.8942850957473000850229f,0.2959169071935129347040f,\
0.4375577621669283212569f,0.2910472961271438063768f,0.1375780266978623433971f,\
1.3818975127290542559422f,0.2580786782411462754183f,0.337103224922307598277f,\
0.0061366100381220973006f,0.1729542689024595181202f,0.2844203312567258890020f,\
0.2261168471284604464255f,1.292840105239649206581f,1.4987826659389660299837f,\
0.4051931219540680362279f,0.6019650966008720516243f,0.0965255712145899474885f,\
0.3599518411886321600512f,0.3243946620517429990649f,0.6238620609478121581404f,\
1.1804783562721565814968f,0.9088946724537740884386f,0.7265514890656400437408f,\
0.407093673069975237055f,0.6693775784027574671242f,0.1985261923397042549411f,\
0.9367355633059043507060f,1.0143322323911900806337f,1.199387299048776833743f,\
0.8224738107516712526390f,0.7363424248289601736772f,0.1551259899908567496674f,\
0.6669785285495629656438f,1.289980681935538386895f,0.0404065303042144760570f,\
0.0334024783187645626925f,0.8548073921139841546690f,0.7561744594372630245971f,\
0.4495844069894625594230f,0.6403046132494145670222f,0.8295822852568314198507f,\
0.4530252724246893181181f,0.2107930369382310653581f,0.747103346555288094777f,\
0.3631353147252046054128f,0.0757405812005388645591f,1.1871407475057926816930f,\
0.9874192358186812956689f,0.8376237455287295352591f,0.5128690395827339987278f,\
0.6635292564994419439728f,0.8173250039556049229006f,0.6269213761078136215588f,\
1.0418634321911146578543f,1.4947401270369859993536f,0.1392800314888206769659f,\
0.4175628314057308609897f,0.4704260294397792363519f,0.29126887742414786509f,\
0.2734108525510542397896f,0.2687961431094310627010f}



#define RSOURCE {0.0100881215184926986694f,0.0074436445720493793488f,0.2989360922947525978088f,\
0.3327573235146701335907f,0.237830940634012222290f,0.8535961345769464969635f,\
0.7922197943553328514099f,0.9695409736596047878265f,0.6468791384249925613403f,\
0.9159972262568771839142f,0.7485287981107831001282f,0.5446169781498610973358f,\
0.4380150139331817626953f,0.8022991069592535495758f,0.0770919052883982658386f,\
0.6038356139324605464935f,0.0416274946182966232300f,0.0491319303400814533234f,\
0.2167323390021920204163f,0.5511633078567683696747f,0.5648556910455226898193f,\
0.7904387773014605045319f,0.8203159859403967857361f,0.8707285351119935512543f,\
0.7680293265730142593384f,0.9941699919290840625763f,0.7653715135529637336731f,\
0.7766020926646888256073f,0.0391560420393943786621f,0.3610868924297392368317f,\
0.7096323622390627861023f,0.1340617476962506771088f,0.3352055754512548446655f,\
0.4794248570688068866730f,0.9102506125345826148987f,0.9960912610404193401337f,\
0.5589408166706562042236f,0.3291657851077616214752f,0.5254327272996306419373f,\
0.5988637856207787990570f,0.3400457371026277542114f,0.7296699327416718006134f,\
0.1172471689060330390930f,0.1599596398882567882538f,0.6893001943826675415039f,\
0.8244171240366995334625f,0.5743538914248347282410f,0.3230684562586247920990f,\
0.4945516120642423629761f,0.1966073368676006793976f,0.1734057078137993812561f,\
0.5929257045499980449677f,0.3272335343062877655029f,0.7093706638552248477936f,\
0.9978715321049094200134f,0.6042335904203355312347f,0.5281810555607080459595f,\
0.6643366483040153980255f,0.4330314965918660163879f,0.5683163288049399852753f,\
0.0414931252598762512207f,0.3723129951395094394684f,0.9558939440175890922546f,\
0.7412597923539578914642f,0.9651917275041341781616f,0.7298236568458378314972f,\
0.9387842947617173194885f,0.2572855348698794841766f,0.2874279357492923736572f,\
0.8952562944032251834869f,0.6853557890281081199646f,0.1711091897450387477875f,\
0.7769848424941301345825f,0.658369113225489854813f,0.4177721040323376655579f,\
0.0530332433991134166718f,0.4968273639678955078125f,0.59690707409754395485f,\
0.4338118461892008781433f,0.9805241837166249752045f,0.9094489198178052902222f,\
0.6140774791128933429718f,0.152644918300211429596f,0.2700240234844386577606f,\
0.0427649877965450286865f,0.9506349326111376285553f,0.2680307617411017417908f,\
0.7927461988292634487152f,0.6853035334497690200806f,0.2653256771154701709747f,\
0.7276884736493229866028f,0.2182058426551520824432f,0.0794423148036003112793f,\
0.8774413042701780796051f,0.7575887991115450859070f,0.0292344330810010433197f,\
0.0814430620521306991577f,0.7652318407781422138214f,0.6499179983511567115784f,\
0.652228816878050565720f,0.2570325322449207305908f,0.4139282093383371829987f,\
0.5334635889157652854919f,0.5463846079073846340179f,0.8812804389744997024536f,\
0.1071240645833313465118f,0.8451719628646969795227f,0.5956639605574309825897f,\
0.3115242570638656616211f,0.7552670040167868137360f,0.7216278789564967155457f,\
0.64724771818146109581f,0.7020909022539854049683f,0.8550091539509594440460f,\
0.0292058298364281654358f,0.5402219365350902080536f,0.5295652858912944793701f,\
0.6731671304441988468170f,0.2516432842239737510681f,0.4682487822137773036957f,\
0.8973557446151971817017f,0.2490413752384483814240f,0.953785804100334644318f,\
0.0199718060903251171112f,0.0883063450455665588379f,0.3088448666967451572418f,\
0.0402540368959307670593f,0.7409055917523801326752f,0.3341060634702444076538f,\
0.6859912057407200336456f,0.5277825826779007911682f,0.5605597789399325847626f,\
0.2702448405325412750244f,0.3409920767880976200104f,0.0499807363376021385193f,\
0.9285474619828164577484f,0.0452665109187364578247f,0.5747140836901962757111f,\
0.8132651047781109809875f,0.0034279632382094860077f,0.5530686080455780029297f,\
0.5287449606694281101227f,0.2227140991017222404480f,0.7380339815281331539154f,\
0.7569990437477827072144f,0.5666191582567989826202f,0.8965943017974495887756f,\
0.205033115576952695847f,0.5744996629655361175537f,0.6296528042294085025787f,\
0.28830870892852544785f,0.0064737624488770961761f,0.2910466734319925308228f,\
0.161138039547950029373f,0.6345168473199009895325f,0.1110653909854590892792f,\
0.9721379503607749938965f,0.6926467292942106723785f,0.4481767667457461357117f,\
0.9629431902430951595306f,0.8420772161334753036499f,0.6861935486085712909698f,\
0.2752589071169495582581f,0.2056670929305255413055f,0.0983050949871540069580f,\
0.7260084436275064945221f,0.9338818406686186790466f,0.8652051738463342189789f,\
0.1300270427018404006958f,0.6536684674210846424103f,0.9546198891475796699524f,\
0.3356514233164489269257f,0.6098881512880325317383f,0.7403389909304678440094f,\
0.4407326159998774528503f,0.0114278956316411495209f,0.4274448286741971969604f,\
0.4898742889054119586945f,0.0670661935582756996155f,0.9097212324850261211395f,\
0.9331833533942699432373f,0.1665275008417665958405f,0.4363766452297568321228f,\
0.1269035614095628261566f,0.4618353042751550674438f,0.6410199669189751148224f,\
0.5118249626830220222473f,0.4726877692155539989471f,0.6037398651242256164551f,\
0.6487199389375746250153f,0.3443940980359911918640f,0.1257671504281461238861f,\
0.1930030044168233871460f,0.0536806662566959857941f,0.813977831043303012848f,\
0.6546894307248294353485f,0.4812035299837589263916f,0.2122878567315638065338f,\
0.6028915112838149070740f,0.2477151653729379177094f}

#define ISOURCE {0.4653960186988115310669f,0.0302665126509964466095f,0.1205546753481030464172f,\
0.4954105126671493053436f,0.8391606211662292480469f,0.8067971416749060153961f,\
0.5980955390259623527527f,0.5697243823669850826263f,0.535449741408228874207f,\
0.4594913427717983722687f,0.0716273644939064979553f,0.1432999591343104839325f,\
0.3299815915524959564209f,0.2239767671562731266022f,0.4729467025026679039001f,\
0.8927706009708344936371f,0.4739306215196847915649f,0.4218414542265236377716f,\
0.5464035095646977424622f,0.9297901126556098461151f,0.8246648237109184265137f,\
0.3906875425018370151520f,0.8106931401416659355164f,0.0035473941825330257416f,\
0.4432799126952886581421f,0.1700443555600941181183f,0.2843202138319611549377f,\
0.8185154641978442668915f,0.1276803798973560333252f,0.0368908629752695560455f,\
0.1934843575581908226013f,0.3111848584376275539398f,0.8499574232846498489380f,\
0.4845375162549316883087f,0.3811378227546811103821f,0.2295314031653106212616f,\
0.5668137520551681518555f,0.7386174597777426242828f,0.6359649775549769401550f,\
0.8589683636091649532318f,0.3717852663248777389526f,0.4039371167309582233429f,\
0.6600336739793419837952f,0.2385329673998057842255f,0.4580096118152141571045f,\
0.3359361500479280948639f,0.8938684901222586631775f,0.7110573030076920986176f,\
0.8602916095405817031860f,0.3305067983455955982208f,0.9176958473399281501770f,\
0.15107359318062663078f,0.4452155604958534240723f,0.7259225868619978427887f,\
0.6476110024377703666687f,0.7142038433812558650970f,0.1180544253438711166382f,\
0.5106264133937656879425f,0.0454169148579239845276f,0.4517838652245700359344f,\
0.7152258791029453277588f,0.0306280092336237430573f,0.5608849888667464256287f,\
0.6344716749154031276703f,0.5510452408343553543091f,0.8902607751078903675079f,\
0.0251876907423138618469f,0.1285902666859328746796f,0.0875252783298492431641f,\
0.1400479921139776706696f,0.2142530409619212150574f,0.6689547612331807613373f,\
0.6959728877991437911987f,0.3454284076578915119171f,0.8007909813895821571350f,\
0.3719339291565120220184f,0.9791326485574245452881f,0.6300911963917315006256f,\
0.9137416174635291099548f,0.3324960893951356410980f,0.6226272527128458023071f,\
0.2876702961511909961700f,0.0238953353837132453918f,0.6489893826656043529510f,\
0.2444448098540306091309f,0.0555481188930571079254f,0.374434794299304485321f,\
0.7194064198993146419525f,0.2112230267375707626343f,0.6445186366327106952667f,\
0.6751487934961915016174f,0.1528833056800067424774f,0.8900802619755268096924f,\
0.6180598423816263675690f,0.27906801458448171616f,0.1401830366812646389008f,\
0.3047434557229280471802f,0.2149655860848724842072f,0.5602726386860013008118f,\
0.6269132751040160655975f,0.6647229343652725219727f,0.2090867855586111545563f,\
0.7116218386217951774597f,0.133228497114032506943f,0.7362840902060270309448f,\
0.3999320124275982379913f,0.6811551460996270179749f,0.5637665162794291973114f,\
0.523965936154127120972f,0.8278774530626833438873f,0.4659156939014792442322f,\
0.8515693820081651210785f,0.23139653541147708893f,0.3077362445183098316193f,\
0.4819453330710530281067f,0.7797386529855430126190f,0.9701553061604499816895f,\
0.3744371854700148105621f,0.2292016251012682914734f,0.8245750456117093563080f,\
0.1854322012513875961304f,0.2345628221519291400909f,0.9701467091217637062073f,\
0.3639524574391543865204f,0.2672337628901004791260f,0.8174969092942774295807f,\
0.6407580440863966941833f,0.0946763656102120876312f,0.3158860523253679275513f,\
0.5199312460608780384064f,0.7127110259607434272766f,0.0025766002945601940155f,\
0.5305844545364379882812f,0.7374818869866430759430f,0.2254834799095988273621f,\
0.7290844931267201900482f,0.1897403579205274581909f,0.7771647279150784015656f,\
0.7071320274844765663147f,0.67804440064355731010f,0.6918747089803218841553f,\
0.2444804669357836246490f,0.2024903288111090660095f,0.7065096027217805385590f,\
0.6258084420114755630493f,0.4988589403219521045685f,0.1275391997769474983215f,\
0.7432725760154426097870f,0.3388997837901115417480f,0.2712128334678709506989f,\
0.1686986042186617851257f,0.1788796423934400081635f,0.9720784332603216171265f,\
0.0373507668264210224152f,0.9457915211096405982971f,0.3708799923770129680634f,\
0.4304266162216663360596f,0.2409997568465769290924f,0.6574296867474913597107f,\
0.1080590835772454738617f,0.2580570150166749954224f,0.9601870519109070301056f,\
0.4275712119415402412415f,0.3774064141325652599335f,0.8860375732183456420898f,\
0.1107313432730734348297f,0.572000074200332164764f,0.2775676711462438106537f,\
0.2221131753176450729370f,0.7805933509953320026398f,0.5034774849191308021545f,\
0.4225312541238963603973f,0.0509742014110088348389f,0.7888357848860323429108f,\
0.4943151315674185752869f,0.6792991734109818935394f,0.2138219568878412246704f,\
0.0629426804371178150177f,0.0151202948763966560364f,0.5832923236303031444550f,\
0.0359809771180152893066f,0.9282481097616255283356f,0.8684628410264849662781f,\
0.2752401321195065975189f,0.9713082071393728256226f,0.90322426753118634224f,\
0.8362140888348221778870f,0.3033045823685824871063f,0.9321490563452243804932f,\
0.0943789319135248661041f,0.0593075519427657127380f,0.1341886124573647975922f,\
0.2735903281718492507935f,0.7845123005099594593048f,0.868671556003391742706f,\
0.7169788884930312633514f,0.9007600247859954833984f,0.3080832012929022312164f,\
0.2860837308689951896667f,0.9434729530476033687592f}

#define RRESULT {0.0091461935615653692372f,0.0074403059517685150512f,0.3011120408510194468299f,\
0.2998770814044370847107f,0.1819248875927510500361f,0.6444988336836313669309f,\
0.6791245188293772994115f,0.8328839139359748289237f,0.5765876696591275551995f,\
0.8504976129204943058326f,0.8394277222457392495514f,0.5667892427465585081237f,\
0.4244768273740840425212f,0.8613255288489666261498f,0.0697161665763657567574f,\
0.4438565921449716400460f,0.0376207427201287192275f,0.0452773943778729953680f,\
0.1905350234324321712087f,0.3984765801447008870539f,0.4314770699424559374791f,\
0.7678818181682768306828f,0.6201489749119961647494f,1.056635799167679801158f,\
0.7224469139675204765183f,1.1570753191068809950792f,0.7891360295709419769850f,\
0.5869418614770346431797f,0.0388500272557359208059f,0.3691306128445250300807f,\
0.7557159781600413239744f,0.1282646090865436350192f,0.254601106881209460209f,\
0.4365177363889400918850f,0.8917468285467748945194f,1.0969945987775304718781f,\
0.4896234023783549438313f,0.2644825052430134770809f,0.4440381533885026654751f,\
0.4483584089258232929787f,0.3221387984110837821028f,0.7011289310321348056121f,\
0.0978674265602834936306f,0.1561241830600058055900f,0.6415261435351872210120f,\
0.8301262834168886550756f,0.4226589438886647065452f,0.2631688682703156034748f,\
0.3718501469694869832061f,0.1874416812787549069252f,0.1276292125120765952317f,\
0.6223362931435947320580f,0.3011173751873987280980f,0.5675795050042053979666f,\
0.8129219748246857557561f,0.4890104311779664980619f,0.550584097940126637738f,\
0.6003329153401916196131f,0.4472450285127820834852f,0.5277749449162034700578f,\
0.0337492295725758256753f,0.3812817338877603767777f,0.8272241071562403957884f,\
0.6236783490132045137955f,0.8396686488386544411355f,0.5323480108875771055210f,\
1.2121602671977980136830f,0.2578891950501832064369f,0.2902963532926625123132f,\
1.0407218420407280401463f,0.719658282922589376263f,0.1422515549798589185038f,\
0.6295643770268913863575f,0.6485925881357603728361f,0.3247882629711342783452f,\
0.0497195040545942226751f,0.3510527044460081680377f,0.50563338590045081578f,\
0.3179706585678286345775f,0.99285160840273078975f,0.7609503370287584722576f,\
0.6176058717047394619470f,0.1531988771495936818567f,0.2266760787365090790146f,\
0.0415517947772082799074f,1.218422457974889017152f,0.2526690822330791563743f,\
0.6329425814457148025127f,0.7204713317072120037921f,0.2231989518352319179506f,\
0.5985707095895493878857f,0.2172853881448477131322f,0.0593293879714889560439f,\
0.7385713745542424879531f,0.7823911147317434977566f,0.0289551632441432602039f,\
0.0779646258693818400287f,0.8182888473500083970080f,0.5715052817983971022997f,\
0.5528641949610285655226f,0.2141542425335012378440f,0.4153673917132313930800f,\
0.4332354240667932732123f,0.5700436227902923036481f,0.6908832900189864067997f,\
0.0995605703740609776498f,0.6869435543144543077076f,0.5227653368830831315250f,\
0.2770997202417057603263f,0.5689013982218961151816f,0.6692632096949825415422f,\
0.4851064406738322953849f,0.7345650510869129456992f,0.8789819041715580816287f,\
0.0263110479671970418081f,0.4230828882691921033476f,0.3752940809060429927513f,\
0.6545085349432201438091f,0.2474097208124308444610f,0.3590569749582296354973f,\
1.0107395629243736134839f,0.2444967346619240644578f,0.6498559643022308041083f,\
0.0187681811419864209844f,0.0853955435810109381167f,0.23858632896482903640f,\
0.0338939736966144267161f,0.8239189153398052134492f,0.3225505736889286989566f,\
0.6168540121263207387514f,0.428433060998039016987f,0.5950583374560662885955f,\
0.2394573971728722883157f,0.2741095497000874958715f,0.0487731652979911251000f,\
0.7269475532699710695894f,0.0444861838193508288275f,0.4501104783981072499088f,\
0.6528448282940336744318f,0.0028372513246705619722f,0.4536708244402919421034f,\
0.5336004611058299262893f,0.2198360890060693795256f,0.5959746705988369086526f,\
0.6396262340663229073456f,0.5139896603726894497299f,1.0518513414805021888299f,\
0.1644962891003966809489f,0.5624905673203877132238f,0.6391528366469793054350f,\
0.2879084713580257748333f,0.0063726492100631259435f,0.2079683900269996554844f,\
0.1617268596829900817458f,0.45252598419205131153f,0.1042540297218644135269f,\
0.9167320764408587452365f,0.7202498119943631094131f,0.3747568855205881677151f,\
1.1832506588357394328170f,0.8926873380378329558837f,0.4837753498734558843530f,\
0.2545199640454580136684f,0.1931610886369621860048f,0.0735568361645391743942f,\
0.7995145050294805155744f,0.8044454260553820512669f,0.9085111724757110041040f,\
0.1272278092834613905104f,0.5090362502018392909520f,0.8578711409272452570463f,\
0.3118078521746414644156f,0.6543371722769727449887f,0.5706133911152972970626f,\
0.3988750643962680753063f,0.0094531166452282121282f,0.4291477558442853834642f,\
0.5104896641888095887296f,0.0671088543520260150110f,0.7800123094015957159186f,\
1.1912011959193866683648f,0.12192992647229736192f,0.3274120948460061963914f,\
0.1225950921700365431333f,0.3281975873099651774822f,0.4674494885223512974370f,\
0.3894697523335833855285f,0.4641231634718703258358f,0.4345931392944782367671f,\
0.6995072076723701792744f,0.3508640282412981981075f,0.1249574421756384084992f,\
0.1870180747450552183331f,0.0422329366873970546425f,0.5961240984598299430530f,\
0.5279606410558730367200f,0.3544288908497560397493f,0.2039132017920733119798f,\
0.6057722587792238044813f,0.1797611770377918194441f}

#define IRESULT {0.4500666085684790207466f,0.0302627309405466352055f,0.1259014236203331582598f,\
0.4977434045460411571327f,0.773705242465913545225f,0.887900733341152936795f,\
0.7079916425568136828517f,0.7688472856787659237554f,0.6017352744773040162940f,\
0.6498883599394120746950f,0.107039917160296094156f,0.1690548918257823163280f,\
0.3546374548515999203246f,0.3373847934787007063484f,0.4579255569364570899182f,\
0.8732609696455944092719f,0.4580771972571195393975f,0.4106361461893539566148f,\
0.5311452992294272146268f,0.8876026166669700456779f,0.8147068623051754165942f,\
0.5194139247849689500214f,0.8786785088163897583513f,0.0072129604104987166471f,\
0.5609976062745508640361f,0.4112823226813016597170f,0.3933766150232178571144f,\
0.8693290272249873940f,0.1274316261040582265451f,0.0395449426043308974177f,\
0.2628191746325336808354f,0.3088296914886584088045f,0.7926272523547727155702f,\
0.5120084435293993374572f,0.5746945549365780614437f,0.4839450538685827751806f,\
0.6047355489888047719305f,0.7052834690539023787537f,0.6561539945033735277136f,\
0.8478769656358153827824f,0.3825478020514606614100f,0.5066754044490697772574f,\
0.6222644111952397860676f,0.2391828028480158796487f,0.5443776858218749570284f,\
0.4792822085648152929949f,0.86724431342169228110f,0.6822409980077328572889f,\
0.8261589834748411798060f,0.3303572550644504612904f,0.8274965298010771297399f,\
0.1848774585857928254296f,0.4507700784722463716037f,0.7795271583399024928340f,\
0.8398668346264467343687f,0.7396983997066739480175f,0.1380866564681807739934f,\
0.5849046253180708587749f,0.0503500622675033676634f,0.5016357319277500170784f,\
0.6654269099346773463921f,0.0329916341046517930247f,0.7548317451254575871644f,\
0.7182541963203104007363f,0.7522847340656214631949f,0.9046859380442064946237f,\
0.0716988879790057820340f,0.132599207337852937f,0.0912207697238807957429f,\
0.2735698269446988906139f,0.2811794411108771152286f,0.6327124304403525245633f,\
0.7796338249130402298093f,0.4209075105417727225010f,0.7673980540361009516914f,\
0.3642835980514441684974f,0.9112659650125345400795f,0.6691470644846674309392f,\
0.8542200565296905745427f,0.5762098993480122555155f,0.7786617427494030296842f,\
0.3459141320122436358275f,0.0241761593182958818560f,0.6246129374546308676841f,\
0.2422787652159511528893f,0.1602629717157874056355f,0.3776710192863622084225f,\
0.8030895628249021811484f,0.2774953901907728504028f,0.6203514328186836568335f,\
0.7460670209249947726349f,0.1559320495131248929255f,0.8026468549051214429468f,\
0.760424886296417135156f,0.3839751822834133743179f,0.1397861363985309635094f,\
0.3011015740622249303726f,0.3095528263794048440261f,0.6246974136518177456168f,\
0.6824390801574051756972f,0.6364220425441351469686f,0.2265745526065163772955f,\
0.7201722295639139126422f,0.1575984581645545612449f,0.8494571876510255137305f,\
0.3918195908099642577049f,0.7946547307771568702250f,0.6117848393634578441080f,\
0.5208720859508298994811f,0.8690531065973791102763f,0.5637323042761468450124f,\
0.8547026638602744919027f,0.306960447908322775490f,0.4654093394618514789585f,\
0.4651555318578067255153f,0.7751475575968125308890f,0.9112674172531984861934f,\
0.4560028346615129235531f,0.234251732325255618283f,0.7944832243829529350165f,\
0.3423334159329023407281f,0.239457736168475460170f,1.02777275826487124455f,\
0.3564220429250729016424f,0.2650952420467553305450f,0.7646166714313819001703f,\
0.6037691171359901298743f,0.1389158036998756340363f,0.3271927879913820724767f,\
0.6006321860598116124663f,0.7197540296752282795723f,0.0031113959438069660468f,\
0.5221204081389118067946f,0.7059634191281195514378f,0.2238770907129097598176f,\
0.8641197102092305071253f,0.1888045378279312735970f,0.7812121068214791241857f,\
0.8015589685608611736356f,0.6345893564856053270518f,0.7088628827258813824841f,\
0.2802718253544457249760f,0.2060232397943899673720f,0.7740411253804675428825f,\
0.716974289181374180302f,0.5454318495795067445187f,0.2544009667091767235014f,\
0.6958995710025659420239f,0.3906147496642403682543f,0.3317958100335353655019f,\
0.1750450440110335736943f,0.1779427350870727009280f,0.8767597428372501111582f,\
0.0378355850756998610129f,0.9174242179663641971743f,0.3647620293190586560073f,\
0.6587619708007782515224f,0.3153773564551797248257f,0.6579511103942273786416f,\
0.2821737200327205097317f,0.4005650534773762538876f,0.9399862930023007434599f,\
0.4285643691635598884204f,0.3756601850966035938129f,0.8002497169354958472809f,\
0.1581953331446839250418f,0.7519083154621302167442f,0.4373149903759625534150f,\
0.2220927412218937635480f,0.804348871566688328f,0.7089002298114742695034f,\
0.4305150724386235805419f,0.0641995146174158398678f,0.8363640441971674777122f,\
0.5135521078813733986124f,0.6356504507416418370269f,0.2330299466993880075361f,\
0.0720777388352223102874f,0.0151538267615728122067f,0.7485905695903387613299f,\
0.0969510446209165821507f,0.8347965442360075760675f,0.8215865796515979813108f,\
0.2738845295035164384423f,0.8996918043828731059719f,0.8896690120740690099765f,\
0.8117683352741612567982f,0.3329971294517217184072f,0.9008120497468148357711f,\
0.1230347833276769775601f,0.0631133065200175230602f,0.1348341818397757463366f,\
0.2749675342978448178144f,0.7210794354646373749418f,0.9161054973709473747689f,\
0.7559186765863976642521f,0.8531345425055275599746f,0.3096300406745840505529f,\
0.3413400734450014462062f,0.8520286730709790701255f}

void sasinsTest(void) {
 	float in[]= SOURCE;
	float res[]= RESULT;
	float out;
	int i=0;

	for (i=0;i<200;i++){
		out=sasins(in[i]);
		assert( ( (fabs(out-res[i])) / (fabs(out)) ) <1e-6);
	}
}

void casinsTest(void) {
	float inR[]= RSOURCE;
	float inI[]= ISOURCE;
	float resR[]= RRESULT;
	float resI[]= IRESULT;
	floatComplex out,in;
	int i=0;

	for (i=0;i<200;i++){
		in = FloatComplex(inR[i],inI[i]);
		out=casins(in);
	/*	printf("%d - %f  - erreur %f\n",i,cimags(out),(fabs(cimags(out)-resI[i])) / (fabs(cimags(out))));*/
		assert( ( (fabs(creals(out)-resR[i])) / (fabs(creals(out))) ) <1e-6);
		assert( ( (fabs(cimags(out)-resI[i])) / (fabs(cimags(out))) ) <1);
	}
}

void sasinaTest(void) {
 	float in[]= SOURCE;
	float res[]= RESULT;
	float out[200];
	int i=0;
	
	sasina(in,200,out);
	for (i=0;i<200;i++){
		assert( ( (fabs(out[i]-res[i])) / (fabs(out[i])) ) <1e-6);
	}
}

void casinaTest(void) {
	float inR[]= RSOURCE;
	float inI[]= ISOURCE;
	float resR[]= RRESULT;
	float resI[]= IRESULT;
	floatComplex out[200],in[200];
	int i=0;

	for (i=0;i<200;i++){
		in[i] = FloatComplex(inR[i],inI[i]);
	}

	casina(in,200,out);
	for (i=0;i<200;i++){
		assert( ( (fabs(creals(out[i])-resR[i])) / (fabs(creals(out[i]))) ) <1e-6);
		assert( ( (fabs(cimags(out[i])-resI[i])) / (fabs(cimags(out[i]))) ) <1);
	}
}


int testAsin(void) {
  printf("\n>>>> Float ArcSine Tests\n");
  sasinsTest();
  casinsTest();
  sasinaTest();
  casinaTest();
  return 0;
}

int main(void) {
  assert(testAsin() == 0);
  return 0;
}
