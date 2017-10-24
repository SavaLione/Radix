/*
===========================================================================
Radix
				*******************************************
				*		DO NOT DELETE ANY FUNCTIONS		  *
				*******************************************
2017
===========================================================================
*/

///////////////////////////////////////////////////////////////////////////////
//	Standard titles.
///////////////////////////////////////////////////////////////////////////////
/*

	i_unique_model_number - специально сгенерированное уникальное число для каждой модели.
	i_settings_create_template - создание файла настроек. (0 - не удачное создание файла. 1 - удачное создание файла)

*/

///////////////////////////////////////////////////////////////////////////////
//	Formalization of comments.
///////////////////////////////////////////////////////////////////////////////
/*

// Short comment

///////////////////////////////////////////////////////////////////////////////
//	Separating the code block
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Description:
//		{DESCRIPTION}
//
// Code: {NAME}
///////////////////////////////////////////////////////////////////////////////

===========================================================================
{FULL_DESCRIPTION}
===========================================================================

(fast separating the code block)
//-----------------------------------------------------------------------------
*/

///////////////////////////////////////////////////////////////////////////////
//	Key
///////////////////////////////////////////////////////////////////////////////
/*

Delete in stable version
//	DELETE

Test function
Delete in stable version
//	TEST

Check for errors
//	DEBUG

Speed up the execution of the block/function
Make soup
//	SOUP

*/

///////////////////////////////////////////////////////////////////////////////
//	Threads
///////////////////////////////////////////////////////////////////////////////
void v_thread() {

}

///////////////////////////////////////////////////////////////////////////////
//	files
///////////////////////////////////////////////////////////////////////////////
void v_search() {

}

/*
	Поиск локальной версии прошивки
		1 - найдено
		0 - не найдено
		-1 - ошибка
	На вход подаётся значение int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
	Структура файлов
		\\PATCH\\assets\\firmware
	Название файлов:
		{int}.rar
		\	\_____
		 \________int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
*/
int i_search(int i_unique_model_number) {

	return -1;
}

/*
	Загрузка прошивки через сеть интернет
		1 - успешно
		0 - не успешно
		-1 - ошибка
	На вход подаётся значение int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
*/
int i_internet(int i_unique_model_number) {

	return -1;
}

///////////////////////////////////////////////////////////////////////////////
//	Graphic.
///////////////////////////////////////////////////////////////////////////////

void v_window() {

}

///////////////////////////////////////////////////////////////////////////////
//	Logging.
///////////////////////////////////////////////////////////////////////////////
/*
		Логгер
		Определение логгера:
			void LOG(string s);
			void WARN(string s);
			void MSG(string s);
		Логирование:
			LOG("{MESSAGE}");
			WARN("{MESSAGE}");
			MSG("{MESSAGE}");
		Уровни лога:
			0 - MSG уровень. Вывод текста без времени
				Пример:
					[                   ] MSG
			1 - LOG уровень. Стандартные сообщения загрузки, подключения, отключения модулей. Статус задания
				Пример:
					[2017/10/24 21:57:45] [LOG]	LOG
			2 - WARN уровень. Сообщения ошибки
				Пример:
					[2017/10/24 21:57:45] [WARN]	WARN
*/

/*
MNMMMNyNMMMdNdMMMMMNMMmMMddMMMMMMMyohsmdyoooooooooooooydhMMMosm/NmMMMy+h +MMysyo+oshhMMMMMNMy` /Mh  
MmMMMMdyMMMhdhNMMMMmMMNNmNsNMMMMMMmssyooooooooooooooosomyNMMh+No+mMMMM.h-:yMNsooooooy-yMMMMMMs  sMo 
MmNMMMNhmMMhymdMMMMMdMMmmmyhMMNMMMMdosoooossoooooooooyohhmMMN/ym.hmMMM/oy``sMmo+ooooysNMMMMMMM/ `hN/
MmdMMMMmyNMdodhNMMMMmmMmmydoNMNmMMMMyooooossoooooooooshsmdMMM+/m/-mMMM+`o  `hMhoooo+oyyMMMMMMMm. .mN
MNhMMMMMhhMdosddMMMMMhNMdsdshMMmNMMMNooooossoooosdNNmodsmhMMMd/hd+dMMN` :.  .mNsoso+oosdMMMMMMMh  :N
MMyNMMMMNsmdooyyMMMMNNhMhoyssNMMdmMMMdoysoyoooohNMMMMNdymhMMMN--ho-NMs.`--:/yhMmddo+ooosNMMMMMMN+  +
MMydMMMMMdyhoosydMMMhMddsoosohMMmhmMMNsyyoyoshNdMMMMMMMdmdNMMM- /o:dm/shhmNNMMMMydds++++yMNMMMMMm.  
MMdomMMMMMysooosyNMMhhNyooooosNMMdyNMMdyooshNMMdNMMMMMMNmmNNdM: -yohydNMMMMNMMMMmsMNs++osNMMMMMMMo  
MMmssmMMNMmsooooomMMN:NdoooooodMMNyyMMNsosmMMMMNmMMMMMMMNNNmoM//:odNMMNmhs/-/NMMNymMNs+oohMMMMMMMN` 
MMNsoyMMmMMhoooooyMNM++NsoooooyMMMhddMMdyNMMMMMMmMMMMMMMMmNh/Mo/hNMMmy-.`    sMmydyMMNy+osMMMMMMMM+ 
MMMssodMdNMNsoooooNdNh`dmooooohNMMms+NMMdNNMMMMMNNMMMMMMMNN//yoNMmymm-       :Nd/dsNNohsosdMMMMMMMh 
MMMhyoomdmMmhoooosdmyN`:NyooosmNNNm:ssMMmNdMMMMMNNMMMMMMMNo-shMMy.`sm.       -ys/shmNymNoyyMMMMMNMN.
MMMdysosddMmysooohhM/m-`dmooodMMNdN/+/mMNmsMMMMMMNMMMMMMh:./sMMMo  sh`       `++++ddMNNMmysNMMh+oNM/
MMMmyhoodhMM+hoooddN:s/ /NssdMMMMoM+.ooMMm/mMMMMMMMMMMd+``/.NMos. -d:     -:/++o:/sdMdNMMdydMMd+/yMo
MMMNsmoodyMM++yooNNm:-/ .mmymMMMN:N+`o-mMN:yMMMMMMMNd+`  -.+Mh--/:s:    `+/:--y/-+/mMMMMMNyyMMMMy-+:
NMMMymsohsMMo`hohMNm:.+:/sNsMMMMd`h/`/`yMN:/MMMMNms:`    ` hNy+.s/`    .//+/.-+:://mNdMMMd:-mMMMs :-
dMMMdmyosoMMs oymMMN+:+` .NhMMMM/ y:`: :MN-.Nmho:`        `sy``-    `.:::+/-`+::::/ddoMMMMd/NMMM+ yo
yNMMNdhoooMMy`:mNMMm::o+//hmMMNs` s. - `mN` +`             /:     `::-:+:.::/:+:-:/hs+dMMMNoNNhm/ o:
mhMMMmdoooNMh-.ydMNo..::--+mMN+/:.o  `  so `-`         `-  `    `.+..---/:--::/:--/h:/sMMMNoNh:y. +.
dymMMMNsosNMy`:omMNyhmNNNMMMMNmNy/-`    :.  `-         `:    ```..o/:://::::--/--./s`//MMMNoNMMm  +.
sdyMMMNsooMMd+/sNMMMNmyo+yNNs//dmso:``  ``   .-        `:     ``..-:::--:------/../:`/:MMMNoMMMs  o`
oyydMMMhosMMmhNMMNmNd:--:`..  -m: `.--`       -`        :    ````..::--:-------.:.-. -+NMMmsMMM: ./ 
oohomMMNyhMMMMMNy:`.os` /o--/sy-              `.        .:.  ``.....::---.-.``.`:``. `oNymdyMMd``-  
ooosyNMMNdMMMNy-    -``:/o++:.               ` -         `+s    ```..:...``.````.- `. sMMMddMM+     
hoosoyMMMMMMN/                          .``````.-```       o:       `.-`````    `:  ``sMMMhNMM+     
sho+osNMMMMM+                         ``.:..`..`/: ``      .+       ``-```` `   `/   `mmyNhNMMNo    
oyhsyyydMMMMN+`                    .`....::---../o` `       -         `.        -:   /Ms.hdMNMMMy.  
/.:so+oomMMNhhy/` .--.---`      ./o:-...--:--....```      `/           .`       o/  `dM/`hmN-:smMN+`
   .msosoNMMmoooo+-   `.`.+//oyss/-.-:--::-:-...````   `  `:.      `   `.       :/  oMM/ hN+   `-+yh
:-:/ydysysNMMm+++o/.``-:..+yoo:--:--::--.-.:.````````     --.     -/    :`         /NMM/`ms`       `
sooo+oydddsmNNm/o/::::---+:-------------....:.`           :`:   .+N/    /-        +NMMM/-y`         
NdymdyysdddymNdd///::-:-:/:::------......```-.            +`-++`mMM-    `       `sNMMMMoo.          
osmdymNNNNhdNMNddo:+:::-:-:::-:---..-..`` `              `o+oys.NMN.           .dMMMMMMd-           
/hNNdshNNNNNMNmNhy+:+:--:--:-.......````              `:osssooo-hMm.          /mMMMMNhMN`           
y-/hNNho-.:yMMmdmhoo:/..-.-.::.````     ``    ``  `:+oyyys+/+++:/mN.        `+NMMMMMM/yM/           
.. `.oN:   -dMMNdmNdy/:--````.-.`      .hs..:sssssyyysyhso/`.//-`sN.       .yNMMMMMMMs`oh`        `-
y+````/so+oyhMMMMNmNhso:--``  `::`     +ys+/:oooooo++++syo+:-///.:y`      -hhmMMMMMMMm` /:    `-:/++
MMdhhyo/omMNmNNMMMMNNdoo+o.`   -++     +hys:+-:+++//+///os+:://:--s`    `+m+`.+ydmNNMMo``---:+++:--.
MMMMMMMMMMMMMMNNMMMMNNNy:/oo`   ..     .mys:o::://///////o/:::::.-/-   `sms`   ``-:+oyhso///:---````
MMMMMMMMMMMMMMMMMMMMmdhdh+-:/:`         sdo+++://////::::/::::::-:`/  .ydo. `.-:/o/+::::--::.```````
MMMMMMy//sNMMMMMMMMMMMNmdhs+--::.       `+-/:s.///:::::-:::-----:-./ .hdo+-///:-.```.://-.``````````
MMMMMN.  `yNMMMMMMMMMMMMMMMNmdo/++-`      -/-/-.oo/:---:-:---::+/--..hdoy+-` ````.://-``````````````
NMMMMMd+odh/shsdMMMMMMMMMMMMMNyossysoo/:-..`-:::-:+oso+/////o+:`   -hh+oo` ` ``.-:.`````````````````
ydNMMMMdsdNd.-+hNMMMMMMMMMMMMMm/+o+++o+oss+ooo+++++/++o+/:/:`...`:sho++:` ````.`````````````````````
-+sNMMMMsoymh/../dNMMMMMMMMMMMMo-.-:+o++o+/://+/++sooo+o++os:` `/d+/:-``  ``````````````````````````
:-++dMMMN:oyhh/-:/+sNMMMMMMMMMMh-`   `.:+s+/+/////+///++///:/+/++````` `` `````````````````````````.
:::s/sMMMd.oosy///-//yNMMMMMMMMN-`       .---/:+o/:-.`        ``      ```````````````````````````.-:
`-::s:oNMMo-+:y/////:++mMMMMMMMm.  `-      `-+o/                    `````````````````````````....-::
:`.://-+NMd::o-y-:/:/-+:hMMMMMMh`   ::`  `:o/.                       ` ``````.-:`````````````...-:::
-/-`-++.+NN+-/:s--:///::-oNMMMM/    `:-`/o/.              `         `````````.:.:-`````..`..--:/-:::
.--/`.o/-:Nh-://--:-//://:/NMMy`     `/o:.`          ``--:--`` ` `  ```````````-:-::..----::-:::::::

*/