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

#include "variance.h"
#include "assert.h"

static int doubleVariance(void){

	int i;
	
	
	/*test 1 */
	{
		double matrice[20]={1,5,9,4,8,2,6,1,5,9,3,7,2,6,1,4,8,3,7,2};
		double out, *outColumns, *outRows;
		double result= 7.5026315789473692063893;
		double resultColumns[5]= {1.6666666666666667406815 ,1.6666666666666667406815   ,12.916666666666666074548   ,1.6666666666666667406815   ,16.666666666666667850905};
		double resultRows[4]={10.300000000000000710543  ,  10.300000000000000710543  ,  6.7000000000000001776357 ,   6.7000000000000001776357};
	
	
	
		outColumns= malloc((uint)5*sizeof(double));
		outRows= malloc((uint)4*sizeof(double));
	
		out = dvariancea(matrice,20);
		drowvariancea(matrice,5,4,outRows);
		dcolumnvariancea(matrice,5,4,outColumns);
	
	
		printf("Variance \n");
		printf("%f\n",out);
		printf("Row Variance \n");
		for (i=0;i<4;i++) printf("%f\n",outRows[i]);	
		printf("Column Variance \n");
		for (i=0;i<5;i++) printf("%f\n",outColumns[i]);
	
	
		assert(fabs(out-result)/fabs(out) <1e-16);
		for (i=0;i<4;i++)assert(fabs(outRows[i]-resultRows[i])/fabs(outRows[i]) <1e-16);
	
		for (i=0;i<5;i++)assert(fabs(outColumns[i]-resultColumns[i])/fabs(outColumns[i]) <1e-16);
		
		free(outColumns);
		free(outRows);
	
	}
	
	
	/* test 2 */
	
	{
		double mtovar[70]={0.2113248654641211032867,0.7560438541695475578308,0.0002211346291005611420,
	 0.3303270917385816574097,0.6653811042197048664093,0.6283917883411049842835,
	 0.8497452358715236186981,
	0.6857310198247432708740,0.8782164813019335269928,0.0683740368112921714783,
	 0.5608486062847077846527,0.6623569373041391372681,0.7263506767340004444122,
	 0.1985143842175602912903,
	0.5442573162727057933807,0.2320747897028923034668,0.2312237196601927280426,
	 0.2164632631465792655945,0.8833887814544141292572,0.6525134947150945663452,
	 0.3076090742833912372589,
	0.9329616213217377662659,0.2146007861010730266571,0.3126419968903064727783,
	 0.3616361008025705814362,0.2922266637906432151794,0.5664248815737664699554,
	 0.4826471973210573196411,
	0.3321718913502991199493,0.5935094701126217842102,0.5015341597609221935272,
	 0.4368587583303451538086,0.2693124809302389621735,0.6325744865462183952332,
	 0.4051954015158116817474,
	0.9184707831591367721558,0.0437334333546459674835,0.4818508932366967201233,
	 0.2639556000940501689911,0.4148103706538677215576,0.2806498021818697452545,
	 0.1280058464035391807556,
	0.7783128595910966396332,0.2119030449539422988892,0.1121354666538536548615,
	 0.6856895955279469490051,0.1531216683797538280487,0.6970850601792335510254,
	 0.8415518426336348056793,
	0.4062024755403399467468,0.4094825475476682186127,0.8784125801175832748413,
	 0.1138359685428440570831,0.1998337740078568458557,0.5618660743348300457001,
	 0.5896177329123020172119,
	0.6853979662992060184479,0.8906224733218550682068,0.5042212805710732936859,
	 0.3493615407496690750122,0.3873778772540390491486,0.9222898678854107856751,
	 0.9488184261135756969452,
	0.3435337245464324951172,0.3760118731297552585602,0.7340940563008189201355,
	 0.2615761472843587398529,0.4993493836373090744019,0.2638578419573605060577,
	 0.5253563085570931434631};
		double out2, *outColumns2, *outRows2;
	 	double result2=     0.0651863337585355667736  ;
		double resultColumns2[7]= {0.0650391675869589902526  ,
	    0.0913789208052724344356  ,
	    0.0837863718398224738282  ,
	    0.0281545517812518443501  ,
	    0.0549594706400152802073  ,
	    0.0389978730537587012228  ,
	    0.0796657637071630925218  ,
	 };
		double resultRows2[10]={0.0988544518240001696130  ,  0.0874673050908554156058  ,  0.0678199050579095519264,    0.0591380787668954188696   , 0.0175386373980947855855 ,0.0831815708684833926556  ,  0.1035239817400336881370 ,   0.0657802543744439444096  ,  0.0667446022405332184402  ,  0.0287884625084994134891};
	
	
		outColumns2= malloc((uint)7*sizeof(double));
		outRows2= malloc((uint)10*sizeof(double));
	
	
	
		out2 = dvariancea(mtovar,70);
		drowvariancea(mtovar,7,10,outRows2);
		dcolumnvariancea(mtovar,7,10,outColumns2);
	
	
		printf("Variance 2 \n");
		printf("%f\n",out2);
		printf("Row Variance 2 \n");
		for (i=0;i<10;i++) printf("%f\n",outRows2[i]);	
		printf("Column Variance 2 \n");
		for (i=0;i<7;i++) printf("%f\n",outColumns2[i]);
	
		assert(fabs(out2-result2)/fabs(out2) <1e-16);
		for (i=0;i<10;i++)assert(fabs(outRows2[i]-resultRows2[i])/fabs(outRows2[i]) <1e-16);
	
		for (i=0;i<7;i++)assert(fabs(outColumns2[i]-resultColumns2[i])/fabs(outColumns2[i]) <1e-16);	
		
		free(outColumns2);
		free(outRows2);
	}
	
	
	return 0;
}


static int doubleComplexVariance(void){
	int i;
	
	/* test 1 */
	{
		double inR[6]={0.9677053210325539112091,0.5068534435704350471497,0.523297640960663557053,0.5596947595477104187012,
		0.5617307000793516635895,0.468176002614200115204};
		double inI[6]={0.7794546722434461116791,0.7901071812957525253296,0.9808542062528431415558,0.8187066102400422096252,
		0.4256872381083667278290,0.2461560554802417755127};
		double varianceR=- 0.0428404140538702279950;
		double varianceI=0.0257955584577409802183;
		double rowVarianceR[3]={0.106135488505625180666,- 0.0124835463256454722719,- 0.01173948205902856229};
		double rowVarianceI[3]={- 0.0049092287964376275095,- 0.0059017052806824826100,0.0167959854763351026929};
		double colVarianceR[2]={- 0.0183554755457089394111,- 0.1019751767306446843531};
		double colVarianceI[2]={0.0109267784648201249365,0.0249829946888768111846};
		doubleComplex *in, *rowVariance, *colVariance;
		doubleComplex out, *outRow, *outCol;
		
		in= malloc ((uint)6*sizeof(doubleComplex));
		outRow= malloc ((uint)3*sizeof(doubleComplex));
		outCol= malloc ((uint)2*sizeof(doubleComplex));
		
		in=DoubleComplexMatrix(inR,inI,6);
		rowVariance=DoubleComplexMatrix(rowVarianceR,rowVarianceI,3);
		colVariance=DoubleComplexMatrix(colVarianceR,colVarianceI,2);
		
		
		out=zvariancea(in,6);
		printf("Variance \n");
		printf("%f + %f *i\n",zreals(out),zimags(out));
		
		assert(fabs(zreals(out)-varianceR)/fabs(zreals(out)) <3e-16);
		assert(fabs(zimags(out)-varianceI)/fabs(zimags(out)) <3e-16);
		
		
		
		
		
		zrowvariancea(in,2,3,outRow);
		printf("Row Variance \n");
		for (i=0;i<3;i++)	printf("%1.20f + %1.20f *i\n",zreals(outRow[i]),zimags(outRow[i]));	
			
			
		for (i=0;i<3;i++){
			assert(fabs(zreals(outRow[i])-rowVarianceR[i])/fabs(zreals(outRow[i])) <3e-16);
			assert(fabs(zimags(outRow[i])-rowVarianceI[i])/fabs(zimags(outRow[i])) <3e-16);
		}
		
		
		
		zcolumnvariancea(in,2,3,outCol);		
		printf("Column Variance \n");
		for (i=0;i<2;i++) printf("%f + %f *i\n",zreals(outCol[i]),zimags(outCol[i]));
				
		
		for (i=0;i<2;i++){
			assert(fabs(zreals(outCol[i])-colVarianceR[i])/fabs(zreals(outCol[i])) <3e-16);			
			assert(fabs(zimags(outCol[i])-colVarianceI[i])/fabs(zimags(outCol[i])) <3e-16);			
		}
		
		free(in);
		free(outCol);
		free(outRow);		
		
	}
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	/* test 2 */
	{
		double inR[70]={0.0453502028249204158783,0.2029444333165884017944,0.7844273825176060199738,
 0.2637536162510514259338,0.4383276398293673992157,0.866485897451639175415,
 0.3792142109014093875885,0.7668716078624129295349,0.6006621322594583034515,
 0.7856735605746507644653,
0.7387115550227463245392,0.5544260339811444282532,0.9929149555973708629608,
 0.9757428467273712158203,0.3709622272290289402008,0.3032238213345408439636,
 0.9519520117901265621185,0.7127858083695173263550,0.119237006176263093948,
 0.5009163180366158485413,
0.3290053526870906352997,0.4808946810662746429443,0.3303695977665483951569,
 0.6304475357756018638611,0.2117190784774720668793,0.4486023131757974624634,
 0.5914509710855782032013,0.6806742670014500617981,0.0739296111278235912323,
 0.9433694705367088317871,
0.1286330693401396274567,0.2019080771133303642273,0.1969303428195416927338,
 0.8928690161556005477905,0.4617918957956135272980,0.6251291716471314430237,
 0.7059706593863666057587,0.7018169648945331573486,0.4087999747134745121002,
 0.0636221384629607200623,
0.0657393387518823146820,0.5331004131585359573364,0.0331581872887909412384,
 0.3157835649326443672180,0.3785823243670165538788,0.4619523435831069946289,
 0.6287369825877249240875,0.2878515301272273063660,0.3292048736475408077240,
 0.4719233047217130661011,
0.3353769634850323200226,0.5553069720044732093811,0.1196080814115703105927,
 0.7613999657332897186279,0.4790988476015627384186,0.2816969295963644981384,
 0.2380097783170640468597,0.3294205460697412490845,0.2306728032417595386505,
 0.2136296601966023445129,
0.4054998042993247509003,0.3095371201634407043457,0.6762971603311598300934,
 0.970691631548106670380,0.5441796570084989070892,0.0204747971147298812866,
 0.8941364963538944721222,0.3490363890305161476135,0.1105365152470767498016,
 0.2023377753794193267822};
		double inI[70]={1.0377217042259871959686,1.9830380710773169994354,-0.6786614381708204746246,
 -1.7368789152242243289948,0.6849579229019582271576,-1.9756898251362144947052, 0.9018773441202938556671,0.4113956945948302745819,0.0771432374604046344757,
 -2.6145569621585309505463,
-0.8694803346879780292511,1.1954508102498948574066,1.0175080369226634502411,
 -1.86952689336612820625,1.6495719677768647670746,-1.1282413271255791187286,
 1.7159116868861019611359,1.3512618443928658962250,1.6467350018210709095001,
 -4.3247690196149051189423,
-1.1214177873916923999786,0.3549467395059764385223,1.5090364827774465084076,
 0.0271988785825669765472,-0.3927204073406755924225,-2.2866433826275169849396,
 2.4531399612314999103546,1.2140426929108798503876,0.1123848785646259784699,
 -1.2278760573826730251312,
0.5748759503476321697235,0.1001535071991384029388,0.7154782521538436412811,
 -0.3598340046592056751251,0.1114491275511682033539,-1.0214430955238640308380,
 1.8411546354182064533234,1.3313704966567456722260,0.107393887359648942947,
 -2.1405860441736876964569,
-0.1921784919686615467072,-0.0941377175040543079376,-0.3007089742459356784821,
 -1.6332105011679232120514,-0.9827875629998743534088,-4.0793808070011436939240,
 1.6021160488016903400421,0.5996482106857001781464,-1.0103867049328982830048,
 -1.9795853956602513790131,
-0.7019297261722385883331,0.1910370937548577785492,0.5148729826323688030243,
 -1.2210475285537540912628,1.4409833527170121669769,-2.0624672439880669116974,
 2.2999203805811703205109,1.6434787488542497158051,-0.0813916879706084728241,
 -4.3653216282837092876434,
0.0896512451581656932831,1.4530082489363849163055,-0.1911182911135256290436,
 -1.5278804996050894260406,-0.8655951828695833683014,-2.6959278550930321216583,
 1.089711368549615144730,0.2611377011053264141083,-0.0787748913280665874481,
 -1.675187868531793355942};
 		double varianceR=- 2.3201230329620456949158;
		double varianceI=0.0135359053960125846894;
		double rowVarianceR[7]={- 2.1748250359163439071608,- 4.0055927597555047725564,- 1.9380991813636070375537,- 1.211164632384367667584,
		- 2.3819157100812309302285,- 3.865411523472068289209,- 1.5488286339908912125907};
		double rowVarianceI[7]={- 0.5161401892195496277083,- 0.0302397956223948334575,0.0072526988331105511632,0.2035074619460965072992,
		- 0.0227578793067023492369,0.0176453877563822227048,0.2048099414748655033858};
		double colVarianceR[10]={ - 0.5673920596394929072304, 
						  - 0.6095831761740567733554,  
						  - 0.4837275005370789138226,
						  - 0.4518709923747168399899,
						  - 1.1155710732654480210613,
						  - 0.9922425930742954092168,
						  - 0.2615272073355465187738,
						  - 0.2448899237808548345896,
						  - 0.5783271525148965253038,
						  - 1.4662540245146995498970 };
		double colVarianceI[10]={ - 0.2519451287679840834066,
						  - 0.1132720366896080160801,
						  - 0.0393753052279357945720 , 
						  0.0678956480014177715665  ,
						  0.0165011281984272333012  ,
						  0.1043646242921155153915  ,
						  - 0.0697520473529744805541 , 
						  0.0395755738577838397929  ,
						  - 0.0906906077772287183558 , 
						  0.2030521845859689644698  };
		doubleComplex *in, *rowVariance, *colVariance;
		doubleComplex out, *outRow, *outCol;
		
		in= malloc ((uint)70*sizeof(doubleComplex));
		outRow= malloc ((uint)7*sizeof(doubleComplex));
		outCol= malloc ((uint)10*sizeof(doubleComplex));
		
		in=DoubleComplexMatrix(inR,inI,70);
		rowVariance=DoubleComplexMatrix(rowVarianceR,rowVarianceI,7);
		colVariance=DoubleComplexMatrix(colVarianceR,colVarianceI,10);
		
		
		out=zvariancea(in,70);
		printf("Variance 2 \n");
		printf("%f + %f *i\n",zreals(out),zimags(out));
		
		assert(fabs(zreals(out)-varianceR)/fabs(zreals(out)) <3e-16);
		assert(fabs(zimags(out)-varianceI)/fabs(zimags(out)) <3e-16);
		
		
		
		
		
		zrowvariancea(in,10,7,outRow);
		printf("Row Variance 2 \n");
		for (i=0;i<7;i++)	printf("%1.20f + %1.20f *i\n",zreals(outRow[i]),zimags(outRow[i]));	
			
			
		for (i=0;i<7;i++){
			assert(fabs(zreals(outRow[i])-rowVarianceR[i])/fabs(zreals(outRow[i])) <3e-16);
			assert(fabs(zimags(outRow[i])-rowVarianceI[i])/fabs(zimags(outRow[i])) <3e-16);
		}
		
		
		
		zcolumnvariancea(in,10,7,outCol);		
		printf("Column Variance 2 \n");
		for (i=0;i<10;i++) printf("%f + %f *i\n",zreals(outCol[i]),zimags(outCol[i]));
				
		
		for (i=0;i<10;i++){
			assert(fabs(zreals(outCol[i])-colVarianceR[i])/fabs(zreals(outCol[i])) <3e-16);			
			assert(fabs(zimags(outCol[i])-colVarianceI[i])/fabs(zimags(outCol[i])) <3e-16);			
		}
		free(in);
		free(outCol);
		free(outRow);
		
	}
	
	return 0;
}





static int testDoubleVariance   (void) {
  printf("\n\n\n\n*********************\n");
  printf("***** Double  Tests Nono****\n");
  printf("*********************\n");
	assert(doubleVariance()==0);
	assert(doubleComplexVariance()==0);


  return 0;
}

int main(void) {
  assert(testDoubleVariance () == 0);
  return 0;
}

