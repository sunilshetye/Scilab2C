/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testSinh.h"

#define SOURCE {0.7062616096809506416321,0.4090520101599395275116,0.3011248558759689331055,\
0.1880126395262777805328,0.1796709178015589714050,0.2828889950178563594818,\
0.7232380937784910202026,0.7360379849560558795929,0.1852612206712365150452,\
0.7703790138475596904755,0.1914967410266399383545,0.7521587223745882511139,\
0.6205883463844656944275,0.2807604051195085048676,0.2289868686348199844360,\
0.5049233403988182544708,0.8354099662974476814270,0.8174716415815055370331,\
0.0030740275979042053223,0.3677616142667829990387,0.8278525872156023979187,\
0.72754097869619727135,0.5323124285787343978882,0.9267726917751133441925,\
0.9542504185810685157776,0.3162104780785739421845,0.5789009965956211090088,\
0.6881225542165338993073,0.3714061146602034568787,0.1705444059334695339203,\
0.1954363007098436355591,0.978800852317363023758,0.9300233917310833930969,\
0.5357720064930617809296,0.3947123587131500244141,0.1344871171750128269196,\
0.7380615202710032463074,0.588114650454372167587,0.9113173168152570724487,\
0.5682763461954891681671,0.1127616921439766883850,0.9478473584167659282684,\
0.5237770043313503265381,0.8140139640308916568756,0.1400952627882361412048,\
0.2763446993194520473480,0.9059953633695840835571,0.1379901585169136524200,\
0.5603838684037327766419,0.3008610638789832592011,0.4767417535185813904,\
0.8127435916103422641754,0.1988414181396365165710,0.1107953130267560482025,\
0.2159351315349340438843,0.6467244853265583515167,0.6597879612818360328674,\
0.0691898013465106487274,0.9164751060307025909424,0.8635670826770365238190,\
0.5032854294404387474060,0.1832137755118310451508,0.8403698671609163284302,\
0.9247214836068451404572,0.6229452537372708320618,0.2773811477236449718475,\
0.2479109913110733032227,0.3891948559321463108063,0.0436578569933772087097,\
0.8132526441477239131928,0.7686451207846403121948,0.4041520212776958942413,\
0.8579940209165215492249,0.6993723283521831035614,0.0828925184905529022217,\
0.9201254160143435001373,0.5200281282886862754822,0.9351884997449815273285,\
0.8825624976307153701782,0.2245844271965324878693,0.2153332801535725593567,\
0.4327089670114219188690,0.5800157263875007629395,0.8876141034997999668121,\
0.5258982880041003227234,0.859640696551650762558,0.7337234076112508773804,\
0.7134532411582767963409,0.1087165409699082374573,0.8477638359181582927704,\
0.6594733335077762603760,0.7916418449021875858307,0.6067967480048537254334,\
0.4102901122532784938812,0.1958728153258562088013,0.241527963895350694656,\
0.5113455550745129585266,0.9119556057266891002655,0.0928984880447387695313,\
0.7438839026726782321930,0.1938720373436808586121,0.4355978979729115962982,\
0.9922429900616407394409,0.4533818070776760578156,0.8269640663638710975647,\
0.8889675955288112163544,0.4682085178792476654053,0.3856786251999437808991,\
0.4124865522608160972595,0.6955242282710969448090,0.0978972557932138442993,\
0.8728604433126747608185,0.6359515609219670295715,0.4129665228538215160370,\
0.0294486805796623229980,0.1809961968101561069489,0.7658103061839938163757,\
0.1232470511458814144135,0.0170737411826848983765,0.8835507561452686786652,\
0.3164170170202851295471,0.9378212536685168743134,0.3916359134018421173096,\
0.0844073877669870853424,0.6934146797284483909607,0.4618808380328118801117,\
0.9355291295796632766724,0.0842495900578796863556,0.5402926551178097724915,\
0.5613215523771941661835,0.1306025832891464233398,0.5840523042716085910797,\
0.0048661706969141960144,0.2761953338049352169037,0.7478824090212583541870,\
0.0194325004704296588898,0.6444276878610253334045,0.2243968318216502666473,\
0.2478402368724346160889,0.1196091384626924991608,0.1883201440796256065369,\
0.3393343067727982997894,0.959958622232079505920,0.2847225037403404712677,\
0.8766820700839161872864,0.2853349032811820507050,0.5103433504700660705566,\
0.8752629184164106845856,0.5941145820543169975281,0.3945342986844480037689,\
0.4661326166242361068726,0.0073588271625339984894,0.5170202488079667091370,\
0.4690007264725863933563,0.6654530800879001617432,0.9476742581464350223541,\
0.4933638339862227439880,0.2918433747254312038422,0.2016727942973375320435,\
0.7016656589694321155548,0.8736049132421612739563,0.191055159550160169601,\
0.5307010114192962646484,0.8889481076039373874664,0.0115523664280772209167,\
0.4998398735187947750092,0.6700848620384931564331,0.4995208983309566974640,\
0.1538907447829842567444,0.2571737091057002544403,0.9586529098451137542725,\
0.6246025026775896549225,0.9371285131201148033142,0.9923511571250855922699,\
0.3454555813223123550415,0.7558249053545296192169,0.2107181670144200325012,\
0.9372652801685035228729,0.6767524704337120056152,0.7465373151935636997223,\
0.4050982249900698661804,0.5101723610423505306244,0.9497965183109045028687,\
0.0289692510850727558136,0.1634070957079529762268,0.4146909262053668498993,\
0.0021650679409503936768,0.1810030029155313968658,0.4556188201531767845154,\
0.1977851442061364650726,0.6053877938538789749146,0.4363054675050079822540,\
0.8938506888225674629211,0.6104825991205871105194,0.4316215068101882934570,\
0.2315693595446646213532,0.4675927339121699333191,0.6150764389894902706146,\
0.8621218334883451461792,0.3846137975342571735382}

#define RESULT {0.7664580028254754928696,0.4205551659468407255105,0.3056963415200024125618,\
0.1891222676242167166638,0.1806391579088424403921,0.2866772088777344573707,\
0.7879588923423612722985,0.8043199087726096152551,0.1863227880624591659142,\
0.8488736885251115804607,0.1926692851046332977116,0.8251135119137460449679,\
0.6611970121102711539507,0.2844635257838270536723,0.2309932755888478017603,\
0.5266533298916223904129,0.9360312470542428986420,0.9116099093552539889274,\
0.0030740324393184245005,0.3761077290387422333851,0.9257063259676088229355,\
0.7934443680694276412879,0.5578100394371053871723,1.0652568032347091708800,\
1.1058113484469005438626,0.3215064844139553512648,0.6117813058051149166516,\
0.7437286582384788902189,0.3800039829530417190284,0.1713723342659267123711,\
0.1966828051044853253870,1.1427508290431065418602,1.0700119918415624820085,\
0.5617747940982125154363,0.4050417184145185811595,0.1348928905465842098543,\
0.8069184166073162245425,0.6226085497916535871354,1.0428015042623968167135,\
0.599360373550158476164,0.1130008086773218733967,1.0962875524202524424311,\
0.5480567058218726028684,0.9069365704321199483928,0.1405539802560804574227,\
0.2798753950272672152977,1.0351270996105206290139,0.1384284939283927651221,\
0.5901774101693750829156,0.3054205096845967748465,0.4950072868345940513279,\
0.9052222830609093495724,0.2001543065651501807079,0.1110221320487437962621,\
0.2176171514122479666575,0.6927590813444466366633,0.7087105942005499370495,\
0.0692450191279527643706,1.0502673603752690212332,0.9749750092666438217037,\
0.5248028600685283873162,0.1842404954551666029783,0.9428365029551442066946,\
1.0622620507764020114649,0.6640243707694319930113,0.2809518213531947417039,\
0.2504582355084098987952,0.3990949339123049943723,0.0436717270227189244269,\
0.9059090417535855532805,0.8466005962798425210636,0.4152445147326426222456,\
0.9672066028315211561051,0.7577960172200091104600,0.0829874792017267076671,\
1.0555680256611981171488,0.5437855687819154182350,1.0775908909563920446,\
1.0016820806611792527008,0.2264771318543304656767,0.2170012532427569029725,\
0.4463391386879682620759,0.6130884787237118604963,1.0088449524118139333240,\
0.5504769168224112885213,0.9694988006053883999869,0.8013516989017863689782,\
0.7755389514921953164617,0.1089308262191755055648,0.9530245458199384511744,\
0.7083249989659490264415,0.8769583844905950442694,0.6447256579530228348673,\
0.4218986249201953087074,0.1971277014550009420990,0.2438831089846125732557,\
0.533922660930493120368,1.0437239139050094038907,0.0930321667054502116079,\
0.8144136536953445748566,0.1950888127224135459858,0.4495046404602288658836,\
1.1632667385972190743360,0.4690747173387543877965,0.9244959100750387293033,\
1.0107684876711933164017,0.4855037229984789926007,0.3953114776639800043157,\
0.4242835646837694318911,0.7529734313215303842526,0.0980537032157421939438,\
0.9879966883143458389327,0.6796935751591178798137,0.4248049987494686430267,\
0.0294529372018587365378,0.1819860446417611021808,0.8428897015241260115559,\
0.1235593052805215308343,0.0170745707299980210847,1.00308135457124825152,\
0.3217234423590110692359,1.0814650488452381971172,0.4017244052147506683248,\
0.0845076517232198759499,0.7503344007980436991545,0.4784793780524976836155,\
1.0780917143422910076112,0.0843492926084187938374,0.5669657003997248256866,\
0.5912664777040658181662,0.1309741822002446487439,0.6178283036240778125503,\
0.0048661899017801981890,0.2797202929941594029550,0.8195769639564471908955,\
0.0194337235170454029898,0.6899668115272159507612,0.2262847895615458237995,\
0.2503852962589531161441,0.1198945374904236832458,0.1894352321040725928292,\
0.3458841682539985917799,1.114339839966214773526,0.2885850554536735224076,\
0.9933761739682215319292,0.2892224999614779745727,0.5327868189334407089675,\
0.9913768259985344943885,0.6296876098817790756712,0.4048496130982584539915,\
0.4831971402378967828106,0.0073588935789954878705,0.5403641862154227037962,\
0.4863845156450118945024,0.7156655787491872366957,1.0960307119322381108617,\
0.5136236116845008803367,0.2960038943626104313012,0.2030426468819693797130,\
0.7606754386337204465463,0.9890435019692191964680,0.1922196010078167094370,\
0.5559656008212838784743,1.0107407789878923853877,0.0115526233874804207247,\
0.5209147493956211016908,0.72136900661981750993,0.5205551177967873144326,\
0.1544988804781949887079,0.2600179378248433925691,1.112385813317804839073,\
0.6660146232231449747729,1.080444939603935505801,1.163432674859314452931,\
0.3523677837341518959136,0.8298721326257240127333,0.212281022488974985274,\
1.0806462976206427928361,0.729606491474904528260,0.8178385727082368994445,\
0.4162692379888194293969,0.5325930826611361412759,1.099181921047706733674,\
0.0289733031722175932154,0.1641352799703627574068,0.4266791772900341284114,\
0.0021650696324170431474,0.1819929625387523564051,0.4715467862637556795136,\
0.1990771937658423751394,0.6430498957811131566231,0.4502805198476966808130,\
1.0177235844677285925286,0.6491155460121008635710,0.4451485373036410675418,\
0.2336445425260662012157,0.4848192931203018085640,0.6545992099992568036271,\
0.9729575479551634265008,0.394166691840286298465}

#define ZSOURCER {0.6045256052166223526001,0.9455216196365654468536,0.4476299257948994636536,\
0.8624908211641013622284,0.1751048639416694641113,0.2067177616991102695465,\
0.6848411662504076957703,0.1348653226159512996674,0.0069159921258687973022,\
0.1496290047653019428253,0.5665438110008835792542,0.4359452719800174236298,\
0.6547604538500308990479,0.3381605879403650760651,0.4259321158751845359802,\
0.3060420057736337184906,0.7704779822379350662231,0.7058695447631180286408,\
0.2373670237138867378235,0.8205849635414779186249,0.6789963841438293457031,\
0.5250809141434729099274,0.3359806565567851066589,0.8941988362930715084076,\
0.5461782198399305343628,0.7568633262999355792999,0.0259526828303933143616,\
0.3250150899402797222138,0.6072143577039241791,0.8756139636971056461334,\
0.2962085595354437828064,0.4229678637348115444183,0.4243144039064645767212,\
0.7620028969831764698029,0.3622896494343876838684,0.5658242437057197093964,\
0.6424440070986747741699,0.7580267959274351596832,0.2531452132388949394226,\
0.5266989110969007015228,0.2118590380996465682983,0.4779220153577625751495,\
0.1615962767973542213440,0.9168031658045947551727,0.5461866445839405059815,\
0.4686870560981333255768,0.7772213732823729515076,0.5871783248148858547211,\
0.5848031807690858840942,0.3139644009061157703400,0.3204141603782773017883,\
0.3331634956412017345429,0.2282590121030807495117,0.2750317254103720188141,\
0.4963629124686121940613,0.7453477247618138790131,0.1155001949518918991089,\
0.0626524840481579303741,0.0877018878236413002014,0.5507565210573375225067,\
0.2116370312869548797607,0.8335358710028231143951,0.4045845707878470420837,\
0.2880227542482316493988,0.1750094983726739883423,0.0051561561413109302521,\
0.3109287889674305915833,0.6602919283322989940643,0.9722995534539222717285,\
0.9826813959516584873200,0.0455837054178118705750,0.4096118300221860408783,\
0.7104403134435415267944,0.3917615194804966449738,0.5571686858311295509338,\
0.0565565521828830242157,0.1540721096098423004150,0.9109257892705500125885,\
0.5713340407237410545349,0.3488348922692239284515,0.8972954172641038894653,\
0.2973396372981369495392,0.1091936426237225532532,0.7626331257633864879608,\
0.6584706604480743408203,0.6996708759106695652008,0.6756794182583689689636,\
0.9004421546123921871185,0.6668148916214704513550,0.8518152837641537189484,\
0.8365677157416939735413,0.1291190306656062602997,0.6095453463494777679443,\
0.2412315667606890201569,0.4029275467619299888611,0.3019328541122376918793,\
0.1083198729902505874634,0.8456356939859688282013,0.9417407037690281867981,\
0.9083450469188392162323,0.1937242373824119567871,0.5318046086467802524567,\
0.8314437521621584892273,0.4952740012668073177338,0.7465563025325536727905,\
0.7102393140085041522980,0.5811418974772095680237,0.7035941029898822307587,\
0.3746570833027362823486,0.3394373343326151371002,0.6322447275742888450623,\
0.7636191300116479396820,0.6940386760979890823364,0.8735245508141815662384,\
0.3612738298252224922180,0.7933200257830321788788,0.4830590635538101196289,\
0.2469964125193655490875,0.5025922833010554313660,0.7430270477198064327240,\
0.6783937942236661911011,0.4903185223229229450226,0.709806025959551334381,\
0.3303662906400859355927,0.6815545372664928436279,0.0701365978457033634186,\
0.4745870968326926231384,0.8091805852018296718597,0.9447045121341943740845,\
0.5478458073921501636505,0.1216687532141804695129,0.9161847713403403759003,\
0.3045207932591438293457,0.6502694808878004550934,0.0987624628469347953796,\
0.8391053467057645320892,0.0328534897416830062866,0.3461971958167850971222,\
0.2801467711105942726135,0.5500544901005923748016,0.0729318000376224517822,\
0.0225322381593286991119,0.50267804320901632309,0.3478884599171578884125,\
0.4298669416457414627075,0.3537984383292496204376,0.0529730813577771186829,\
0.9533003675751388072968,0.1842019557952880859375,0.958756382111459970474,\
0.3245136169716715812683,0.0003973259590566158295,0.0972583871334791183472,\
0.4378789965994656086,0.3634226778522133827210,0.2685119728557765483856,\
0.2770298384130001068115,0.8854365111328661441803,0.5216628303751349449158,\
0.4979983693920075893,0.8733724001795053482056,0.4699407932348549365997,\
0.9364062966778874397278,0.1337622734718024730682,0.2712419554591178894043,\
0.1766990595497190952301,0.0543269468471407890320,0.8402757882140576839447,\
0.7507283594459295272827,0.3062269617803394794464,0.9195641661062836647034,\
0.1318263853900134563446,0.0826364941895008087158,0.8222710476256906986237,\
0.4441085970029234886169,0.9617503038607537746429,0.0283641982823610305786,\
0.1431905967183411121368,0.3793597565963864326477,0.6144003230147063732147,\
0.2128270715475082397461,0.4704488315619528293610,0.2076055286452174186707,\
0.7435979112051427364349,0.3391801547259092330933,0.2479635034687817096710,\
0.6721735307946801185608,0.9013197491876780986786,0.2140864841639995574951,\
0.8460668534971773624420,0.1650043567642569541931,0.4003686285577714443207,\
0.5522825215011835098267,0.0638249483890831470490,0.6903966935351490974426,\
0.8547787251882255077362,0.0291904583573341369629,0.5434663915075361728668,\
0.6236743135377764701843,0.2417052476666867733002}

#define ZSOURCEI {0.5503273960202932357788,0.6906704087741672992706,0.9835249418392777442932,\
0.8285484607331454753876,0.2062614001333713531494,0.1944643096067011356354,\
0.4367609983310103416443,0.8090620837174355983734,0.8818644303828477859497,\
0.7404803228564560413361,0.7542522149160504341126,0.9921960639767348766327,\
0.9886121451854705810547,0.0113218077458441257477,0.9367801276966929435730,\
0.3874237253330647945404,0.2886805813759565353394,0.567788839805871248245,\
0.7295644441619515419006,0.0303032915107905864716,0.2795897088944911956787,\
0.7047131718136370182037,0.7442112853750586509705,0.8920237845741212368012,\
0.1081438604742288589478,0.8751525697298347949982,0.9068333031609654426575,\
0.2166852983646094799042,0.4824190363287925720215,0.7766945236362516880035,\
0.4510916722938418388367,0.1300636469386518001556,0.5505470838397741317749,\
0.6936193336732685565949,0.1749099576845765113831,0.8636093880049884319305,\
0.2150467522442340850830,0.1886725709773600101471,0.1796098565682768821716,\
0.4374312213622033596039,0.8514516223222017288208,0.7381969136185944080353,\
0.8102188156917691230774,0.1460137623362243175507,0.8999849110841751098633,\
0.4043733575381338596344,0.0156995235010981559753,0.6904196902178227901459,\
0.2990311514586210250855,0.1383218024857342243195,0.8478512773290276527405,\
0.3007262717001140117645,0.229154746979475021362,0.8078110129572451114655,\
0.3176332255825400352478,0.6924462593160569667816,0.1364154014736413955689,\
0.5433279541321098804474,0.3276594849303364753723,0.2006831648759543895721,\
0.5037304237484931945801,0.4962565028108656406403,0.8996161324903368949890,\
0.9357709079049527645111,0.3390339072793722152710,0.6029155333526432514191,\
0.4153500730171799659729,0.3041478390805423259735,0.8489827848970890045166,\
0.4482063786126673221588,0.0903797810897231101990,0.7382151386700570583344,\
0.2669597584754228591919,0.8226196658797562122345,0.3985779182985424995422,\
0.9789295899681746959686,0.3041231036186218261719,0.0663515278138220310211,\
0.6667758254334330558777,0.7548807277344167232513,0.1922533493489027023315,\
0.7942791883833706378937,0.5580398896709084510803,0.2016023616306483745575,\
0.787146832793951034546,0.0955459238030016422272,0.6623697867617011070252,\
0.864868474658578634262,0.7013061288744211196899,0.8015053984709084033966,\
0.9135685982182621955872,0.6317234965972602367401,0.9346773549914360046387,\
0.9157753759063780307770,0.0510348035022616386414,0.4329969524405896663666,\
0.9721843507140874862671,0.8001508046872913837433,0.8452261472120881080627,\
0.0610524858348071575165,0.8168097324669361114502,0.2101262793876230716705,\
0.3055453812703490257263,0.9465212575159966945648,0.9269728232175111770630,\
0.7737778765149414539337,0.5893978821113705635071,0.2377697187475860118866,\
0.5269544571638107299805,0.0077543654479086399078,0.8311711428686976432800,\
0.0268517597578465938568,0.2591186594218015670776,0.4641277943737804889679,\
0.6098861405625939369202,0.0656952331773936748505,0.6466812007129192352295,\
0.1018534512259066104889,0.2742705782875418663025,0.8162728524766862392426,\
0.3357750270515680313110,0.4765891996212303638458,0.8440040023997426033020,\
0.1785074654035270214081,0.5855625644326210021973,0.8426241897977888584137,\
0.7058847947046160697937,0.7396617024205625057221,0.9751448985189199447632,\
0.7606669445522129535675,0.8236690396443009376526,0.8889620001427829265595,\
0.7960178293287754058838,0.3052428201772272586823,0.6803312664851546287537,\
0.6412069997750222682953,0.0988248009234666824341,0.4654508423991501331329,\
0.6714970665052533149719,0.5131103205494582653046,0.8631567060947418212891,\
0.8328299173153936862946,0.1687975851818919181824,0.2961277081631124019623,\
0.2591485660523176193237,0.1700844173319637775421,0.9718958893790841102600,\
0.0695185582153499126434,0.4696230851113796234131,0.9544191421009600162506,\
0.3679352095350623130798,0.2973918146453797817230,0.0415310803800821304321,\
0.4892336544580757617950,0.5171590568497776985169,0.3534862431697547435761,\
0.2354387864470481872559,0.6779259913600981235504,0.3834532154724001884460,\
0.3174350797198712825775,0.3418120350688695907593,0.0535557498224079608917,\
0.9285596096888184547424,0.3862650538794696331024,0.4328473098576068878174,\
0.1581165478564798831940,0.7887120461091399192810,0.7448797873221337795258,\
0.5185996759682893753052,0.8651678604073822498322,0.1524438308551907539368,\
0.2392775672487914562225,0.5761575847864151000977,0.7395762302912771701813,\
0.0583172617480158805847,0.6962534948252141475678,0.4206145536154508590698,\
0.0281158541329205036163,0.8313249954953789710999,0.2333360086195170879364,\
0.8865877203643321990967,0.3746785433031618595123,0.87671328987926244736,\
0.4027077830396592617035,0.2890332732349634170532,0.8538430598564445972443,\
0.5499771209433674812317,0.5128610017709434032440,0.6321087554097175598145,\
0.4165538274683058261871,0.3217771751806139945984,0.9717370062135159969330,\
0.5348322447389364242554,0.3416590173728764057159,0.9565287167206406593323,\
0.9951003189198672771454,0.3422884084284305572510,0.7870580093003809452057,\
0.9234123295173048973084,0.5238970420323312282562}

#define ZRESULTR {0.5472322176851935893183,0.8423815144738766580446,0.2563943802472780086887,\
0.6580149781735437075625,0.172270452907771959294,0.2042689977544929758047,\
0.6702103597375301813344,0.0933634309412847973597,0.0043966214876582573878,\
0.1108604362841248136551,0.4353327109259368388194,0.2460210551978029014375,\
0.3863009441992301673530,0.3446203724316067584788,0.2600144972151141042893,\
0.2878039319893796466054,0.8138720272443707992593,0.6457782886418844681131,\
0.1786150863987957249091,0.9154066811177691276313,0.7039465385045338141623,\
0.4186412388856993738173,0.251831143580886374078,0.6392775639808577770040,\
0.5703895608242733894,0.5327133470263697434532,0.0159949490007091424393,\
0.3230326909984754801819,0.5715867388279289862396,0.70743658734176706471,\
0.2704947225723857706647,0.4320127595486245031253,0.3725662344034775808055,\
0.6443049465819230547936,0.3646176810862393202761,0.3875469668337525042112,\
0.6717212085417494371598,0.8179578243363959666468,0.2517417237838881494128,\
0.4994735839970788071618,0.1406387935502509678454,0.3671229322416942886243,\
0.1118802149170177451243,1.0395621212598731286647,0.3566561127022580546253,\
0.4468365274738785863917,0.8577631106167230568005,0.4791678319520160100886,\
0.5912541631998992075481,0.3160997340804129196457,0.2156306076938400706489,\
0.3241312167359722828941,0.2242273866635746126796,0.1924748395730505323709,\
0.4911358423279918450355,0.6282969869096745041404,0.1146817647308075033275,\
0.0536651752624737465869,0.0831424755428421952130,0.5674049454933377534260,\
0.1867359129769284864508,0.8208629596874984502009,0.2585362736705908437429,\
0.1732265992600796333800,0.16589114027651630234,0.0042470718039759334031,\
0.2890982749320905043078,0.6767719859275036498048,0.7485620199211779901560,\
1.0351949282063730439774,0.0454133801589929955722,0.3115216746749414067352,\
0.7443929466921332949170,0.2733866129562390612229,0.5404777583133708596108,\
0.0315703580162773125850,0.147584010699447737425,1.039942513447497107748,\
0.4737927564457495854811,0.2592593650600479859847,1.0038035523317359043460,\
0.2114594061381599998661,0.0928125663229541070232,0.8217516921908377680595,\
0.4991177362348290791339,0.7547125896791468946390,0.5742746733474036746614,\
0.6663538162766660111203,0.5480484998281744957183,0.6668472960736752108701,\
0.5728135406334763368719,0.1044902427136027156518,0.3849616107773408679726,\
0.1483818586286529961349,0.4133800608325002845511,0.2782513626438464227064,\
0.0611572839884242727693,0.6618291251618653170397,0.7214555888399967198410,\
1.0365769046431902999927,0.1334450193993464428566,0.5449721531302730292978,\
0.8875031186053717879858,0.3014734616304127201580,0.4909287752495701262490,\
0.5518178196952380210050,0.5107438627596426750088,0.7416305403413676611280,\
0.3314614008027890745822,0.3459827842193233804480,0.4551032028697677422890,\
0.8397231818014913029558,0.7260395894674003258729,0.8843138378471343541420,\
0.3026251045027910646645,0.8772951459166481447127,0.4006929045316259263565,\
0.2482223780387364797662,0.5044338903508289728705,0.5570690492655497871866,\
0.6907809922454775097833,0.4533479549350135084929,0.5122634930781091444629,\
0.3310630379415674395816,0.613016054683563793581,0.0467146352521808638780,\
0.3748904897125588941975,0.6651387060224456249102,0.6124566220104487035414,\
0.4169978608497757477380,0.0828821922879106609550,0.6616323773282192233225,\
0.2163376802382008246006,0.6648529631046872223621,0.0768992913125638027916,\
0.7541728606139842527867,0.0326990726296657319150,0.3155854015657582611887,\
0.2222045454294520605565,0.5037531760449395212831,0.0474507678257595696958,\
0.0151606295675061168715,0.5166679862331013950438,0.3394987264597518761278,\
0.4284286045731299230610,0.3560134790628905476773,0.0298767286161388812005,\
1.1017278018047820253855,0.1651905315864863887931,0.6431406060888099629480,\
0.3081371323272805162752,0.0003798849528566614498,0.0973277933130341499357,\
0.3989833287694000141244,0.3228967085282569149385,0.2549483000782091224323,\
0.2728461176861247117209,0.7833569024666595659312,0.5060212064439562063001,\
0.4929175980688511038430,0.9315180933744126035023,0.4867312349946628091679,\
0.6465368595829137365882,0.1242768439875277936002,0.2492570609243859591775,\
0.1754042926970652005458,0.0383062756502238338507,0.6930494891633879328552,\
0.7150128880873719561251,0.2017103771899077802043,1.0425200734321566908847,\
0.1284418402888304333587,0.0693747355415850891491,0.6782611829725390117929,\
0.4580719788105512280119,0.8570372579890597197760,0.0258953949937216834631,\
0.1436236317560128927795,0.2618257507714434328960,0.6360738131964667196883,\
0.1355372871482912744412,0.4541408129960864403785,0.1337573051159255954623,\
0.7489238330244115671164,0.3313805035932426146239,0.1646094396781437041444,\
0.6171903594464053233182,0.8960982240646825358610,0.1740438285898232018134,\
0.8693877096502734547201,0.1572467731529608725438,0.2318339325462937250411,\
0.4996847882291703402125,0.0601767100407825661357,0.4302901718551004339730,\
0.5241328386970756092467,0.0275009970661485095289,0.4028168044525495261610,\
0.4010021931852675303176,0.2113305958381946625391}

#define ZRESULTI {0.6214715223992962611632,0.9436786189504819954976,0.9172582471851381535899,\
1.0284753878837631368981,0.2079498059841204116172,0.1973845021659479948006,\
0.5261415139330058998723,0.7302311658604533350925,0.7719439236164448159272,\
0.6822088697503370102737,0.7976066327178688020183,0.9180538587851772014403,\
1.0207957462450507613028,0.0119750831911820069392,0.879846633700931413102,\
0.3956357637150365591516,0.3734519291784937355949,0.6773972534299040892947,\
0.6854109454702602688414,0.0410850121880191737622,0.3420572770093958103743,\
0.7391907226260076013702,0.7159858470768458715838,1.1108178290074384175767,\
0.1244362063872984924817,0.9982082241998391225479,0.7878214785460178060106,\
0.2264493394334471387808,0.552110320407191546010,0.9872379452017052692270,\
0.4552134557945506365684,0.1414727851379618539518,0.5709593924198277381521,\
0.8340926447704026802654,0.1855652888756788854163,0.8851645482631337324975,\
0.2589660662395600887464,0.2440703736645542243355,0.1844003846229365917164,\
0.4837426621723381336970,0.7691827103731639914130,0.7512840132775820967126,\
0.7339173856842455823113,0.2110467570718085883463,0.9030907830676864200825,\
0.4374528982447763447716,0.0206840630038046084660,0.7498395827082200426617,\
0.3464215069230207055817,0.1447328712349580659424,0.7886833031982384278891,\
0.312806155477839797907,0.2330978063822336521227,0.7502851663968435058649,\
0.3515894758711366474557,0.8241207799426445435032,0.1369007991441129890031,\
0.5180025607419450617286,0.3230663992238576032179,0.2303438195780269093227,\
0.4935463909681327976387,0.6513439726551492059414,0.8480586102235279089001,\
0.8386806876018545464646,0.3376822861028858646648,0.5670539014238122899059,\
0.4231729333084569000256,0.3671714099084233406956,1.13425596729819333497,\
0.6599735877547936446774,0.0903505740838268234238,0.7302185329365624699705,\
0.3332210660971928195551,0.7898975683733762132022,0.4499243250096228718959,\
0.8312282843326663783756,0.303017954499597730322,0.0957670218140728168876,\
0.7221703011467139887714,0.7273159314358644822463,0.2732920828342843555525,\
0.7451259889709352934872,0.5326844296662366362583,0.2613476456913891299294,\
0.8675343198300645708443,0.1197200851202140647889,0.7607940863441885470664,\
1.090938503691738947765,0.7940557967113777149137,0.9951827798045931317006,\
1.0852570666616287997641,0.595465988685999203511,0.9585290107353723332295,\
0.8162216959679288175167,0.0552099482904373911607,0.4388645680780451363567,\
0.8309698024824113682385,0.9896452984090404747519,1.1051208602025746063902,\
0.0879648640386297558935,0.7426871822259456523696,0.2387805138959819828415,\
0.4109188911191957171987,0.9129531289726338094681,1.033237369823349904863,\
0.8826396237315312642835,0.6523964780046094258381,0.2962811673651402077923,\
0.538613833971326338990,0.0082053089862361757584,0.8913512641166435601647,\
0.0350642631947976693,0.3204573641970900332865,0.6295687491907059341045,\
0.6105613490275437760246,0.0874124111159134270510,0.6742190253215021300548,\
0.104794765122307897975,0.3057785774947048840211,0.9391488111872891009213,\
0.4082750199603700225204,0.5150095094925122296559,0.9436041246896892387142,\
0.1873390728066921528949,0.686076538028982052531,0.7482286603321709472780,\
0.7231441171996566552593,0.9070157682190420622703,1.2254699773201918056031,\
0.7954755918374329937137,0.7390808722803764441167,1.1257197223371009364712,\
0.7479651939595457488252,0.3663340286526505784615,0.6321209550080593153609,\
0.8213953702909778664676,0.0987172713829019138343,0.4759918803039691614920,\
0.6467330123916542605755,0.5670425014955073894640,0.7619202005568085356302,\
0.7400260728625026596106,0.1896730654043395358777,0.3096563558430623364082,\
0.2803008416090244647734,0.1799702823909465065899,0.8271151236999281231022,\
0.1034896632231103036359,0.4602495369086131438152,1.2206297477145873209281,\
0.3787956849306995388282,0.2930275328196350614896,0.0417156660446471733161,\
0.5157276686593796899416,0.5274236913745330435077,0.3587249786695337894216,\
0.2422782860407424743165,0.8895205282611465813503,0.4261958074481287384039,\
0.3516419517981719256028,0.4713702889404160489839,0.0595506543369787033626,\
1.1782482373185512170011,0.3801066173107530143938,0.4349822461068365009318,\
0.1599230612164924403285,0.7104933564880103746830,0.9316143186085994454260,\
0.6420254878605806680980,0.7971748574811535759110,0.2207115251543733114303,\
0.2390631455930626592110,0.5466671036053578625058,0.9149528397614811181526,\
0.0641270748267019075062,0.9615389273937551273264,0.4084857821404656030850,\
0.0284008421665001876966,0.7926291386522584803132,0.2762568577554586624068,\
0.792535972676840283491,0.407224868689896601914,0.785264393436451157982,\
0.5053477011274932761964,0.3015786475260285870448,0.7771045707144023095836,\
0.6452560689270674387785,0.7038409533210520097057,0.6044393344259090250503,\
0.5582751049083489736091,0.3205680190439157417615,0.8929464541247862374718,\
0.5894255515487558660936,0.3357333458035489104354,1.0198128299863529200309,\
1.1643703264707510047771,0.3357866330198117088557,0.8154766229713432679205,\
0.9578920067258681614320,0.5149424663113579825335}



void dsinhsTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out;
	int i;

	for (i=0;i<200;i++){
		out=dsinhs(in[i]);
		assert(( (fabs(out-res[i]))/(fabs(out)) )<1e-15);
	}
}

void zsinhsTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in,out;
	int i;

	for (i=0;i<200;i++){
		in=DoubleComplex(inR[i],inI[i]);
		out=zsinhs(in);
		assert(( (fabs(zreals(out)-resR[i]))/(fabs(zreals(out))) )<1e-15);	
		assert(( (fabs(zimags(out)-resI[i]))/(fabs(zimags(out))) )<1e-15);			
	}
}

void dsinhaTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out[200];
	int i;

	dsinha(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(out[i]-res[i]))/(fabs(out[i])) )<1e-15);
	}
}

void zsinhaTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex *in,out[200];
	int i;


	in=DoubleComplexMatrix(inR,inI,200);
	zsinha(in,200,out);

	for (i=0;i<200;i++){
		assert(( (fabs(zreals(out[i])-resR[i]))/(fabs(zreals(out[i]))) )<1e-15);	
		assert(( (fabs(zimags(out[i])-resI[i]))/(fabs(zimags(out[i]))) )<1e-15);			
	}
}

int testSinh() {
  printf("\n>>>> Double Hyperbolic Sine Tests\n");
  dsinhsTest();
  zsinhsTest();
  dsinhaTest();
  zsinhaTest();
  return 0;
}

int main() {
  assert(testSinh() == 0);
  return 0;
}
