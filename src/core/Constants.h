/**
	\file
	\brief Заголовочный файл с константами.
	\example constants.h
	\author SavaLione	
*/
#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>
//
namespace radix {
	/** 
	    Размер буфера.
	 	В основном используется для чтения строк из файла.
	 */
	const size_t buff_size = 32;
	
	/** 
	    Размер буфера для чтения правил программы.
	 	В основном используется для чтения правил программы.
	 */
	const size_t buff_ruleslist = 256;

	/** Файл с выводом логера. */
	const char logger_list[] = "logger.log";
	
	/** Файл с настройками программы. */
	const char settings_list[] = "settings.ini";

	/** Путь к прошивкам. */
	const char firmware_way[] = "\\assets\\firmware\\";
	
	/** Путь к дополнительным файлам программы. */
	const char patch[] = "\\assets\\";

	/** Расширение прошивок. */
	const char expansion_file[] = ".zip";
	
	/** Файл с прошивкой. */
	const char recovery_file[] = "recovery.img";
	
	/** Файл с su для root. */
	const char su_file[] = "su.zip";
	
	/** Сообщение о том, что файл не найден. */
	const char not_found[] = " not found.";
	
	/** Сообщение о том, что файл не найден. */
	const char found[] = " found.";
	
	/** Сообщение о том, что пользователь продолжил выполнение программы, невзирая на ошибку. */
	const char ch_user_continue[] = "The user continued the program despite the error.";
	
	/** Сообщение о том, что пользователь не продолжил выполнение программы, невзирая на ошибку. */
	const char ch_user_not_continue[] = "The user did not continue the program despite the error.";
}

namespace menu {
    /** Отступ между пунктами меню. */
    const std::string indentation = "       ";
	
    /** Левая скобка и отступ слева. */
    const std::string frame_left = "       <";
	
    /** Правая скобка и отступ справа. */
    const std::string frame_right = ">       ";

    /** Размер шкалы модуля загрузки. */
    const size_t loading_size = 25;
	
    /** Включение задержки, для проверки работоспособности модуля загрузки. */
    const bool loading_check_module = false;
	
    /** Пауза в мс для проверки работоспособности модуля загрузки .*/
    const size_t loading_check_module_sleep = 1000;
	
    /** Модуль загрузки. Левая скобка. */
    const char loading_left = '[';
	
    /** Модуль загрузки. Правая скобка. */
    const char loading_right = ']';
	
    /** Модуль загрузки. Шкала прогресса. */
    const char loading_progress = '|';
	
    /** Модуль загрузки. Значение после шкалы прогресса. */
    const char loading_indenting = ' ';
	
	const size_t backspace = 8;
	const size_t enter = 13;
	const size_t esc = 27;
	const size_t space = 32;
	const size_t arrow_up = 72;
	const size_t arrow_left = 75;
	const size_t arrow_right = 77;
	const size_t arrow_down = 80;
	const size_t special = 224;
}

namespace logo {
    /** Линия. 
        \code
            ===========================
        \endcode
    */
    const std::string border = "===========================\n";
	
    /** Помощь по управлению.
        \code
            ==== <- use to move -> ====
        \endcode
    */
    const std::string little_help = "==== <- use to move -> ====\n";
	
    /** Вопрос о согласии с лицензионным соглашением.
        \code
            Do you agree with the license?
        \endcode
    */
    const std::string license = "Do you agree with the license?\n";
	
    /** Отступ. Используется в связке с move.
        \code
            {       }<- use to move ->
        \endcode
    */
    const std::string move_indentation = "       ";
	
    /** Помощь по управлению.
        \code
            <- use to move ->
        \endcode
    */
    const std::string move = "<- use to move ->\n";
	
    /** Логотип программы
        \code
             _____           _ _      
            |  __ \         | (_)     
            | |__) |__ _  __| |___  __
            |  _  // _` |/ _` | \ \/ /
            | | \ \ (_| | (_| | |>  < 
            |_|  \_\__,_|\__,_|_/_/\_\

        \endcode
    */
    const std::string radix = "  _____           _ _      \n |  __ \\         | (_)     \n | |__) |__ _  __| |___  __\n |  _  // _` |/ _` | \\ \\/ /\n | | \\ \\ (_| | (_| | |>  < \n |_|  \\_\\__,_|\\__,_|_/_/\\_\\ \n";
	
    /** Логотип загрузки
        \code
             _                     _ 
            | |                   | |
            | |     ___   __ _  __| |
            | |    / _ \ / _` |/ _` |
            | |___| (_) | (_| | (_| |
            |______\___/ \__,_|\__,_|  

        \endcode
    */
    const std::string loading = "  _                     _ \n | |                   | |\n | |     ___   __ _  __| |\n | |    / _ \\ / _` |/ _` |\n | |___| (_) | (_| | (_| |\n |______\\___/ \\__,_|\\__,_|\n";
	
    /** Выход
        \code
             ______      _ _   
            |  ____|    (_) |  
            | |__  __  ___| |_ 
            |  __| \ \/ / | __|
            | |____ >  <| | |_ 
            |______/_/\_\_|\__|

        \endcode
    */
    const std::string exit = "  ______      _ _   \n |  ____|    (_) |  \n | |__  __  ___| |_ \n |  __| \\ \\/ / | __|\n | |____ >  <| | |_ \n |______/_/\\_\\_|\\__|\n";
	
    /** Вопрос о продолжении выполнения программы.
        \code
            Continue?
        \endcode
    */
    const std::string s_continue = "Continue?\n";
	
    /** Инструкция к программе.
        \code
					User Manual
			0) If necessary, install drivers from assets/Drivers_Universal folder.
			1) Enable USB debugging on your device(You'll need to become developer by tapping "Build Number" in "About Device" section. Then go to Developer section and enable debugging.)
			2) Plug in your device, accept debugging request
            		3) Put files 'recovery.img' and 'su.zip' in program directory(next to Radix.exe) 
			4) Proceed
        \endcode
    */
    const std::string s_manual = "		Manual\n0) If necessary, install the drivers from the assets/Drivers_Universal folder.\n1) Put the file recovery.img in the root of the program.\n2) Put the file su.zip in the root of the program.\n3) Continue.\n";
	
    /** Продолжить выполнение программы по нажатию любой клавиши.
        \code
           Press any key to continue.
        \endcode
    */
    const std::string enter = "Press any key to continue.";
	
	    /** Продолжить выполнение программы по нажатию любой клавиши.
        \code
           Copyright (c) 2017 Radix
		   
		   THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
		   PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN 
		   ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
        \endcode
    */
    const std::string eula = "Copyright (c) 2017 Radix\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A \nPARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN \nACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n";
}

#endif // CONSTANTS_H
