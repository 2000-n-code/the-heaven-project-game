#include <iostream>
#include <string>

int main() {
    while (true) {    std::cout << "\033[2J \033[1;1H";
        std::cout << "You live a comfortable life as a millionaire, but one day, you hear news about a company that just developed a way to upload someone's mind to a computer simulation once they die, so of course, like any reasonable person, you bought them out, you set it up on your own servers, and, like life always goes, die one week later." << std::endl;
        
        std::string q1;
        std::cout << "So, once you were in the simulation, did you decide to A: live on a farm, or B: live like always?" << std::endl;
        std::cin >> q1;
        
        if (q1 == "A" || q1 == "a") {
            std::cout << "\033[2J \033[1;1H";
            std::cout << "You decide to live on a farm, enjoying the simple life and the beauty of nature. You spend your days tending to the animals and crops, and your nights gazing at the stars." << std::endl;
            
            std::string q2;
            std::cout << "Do you want to A: start a family, or B: live a solitary life?" << std::endl;
            std::cin >> q2;
            
            if (q2 == "A" || q2 == "a") {
                std::cout << "\033[2J \033[1;1H";
                std::cout << "You start a family, raising children and teaching them the ways of the farm. You find joy and fulfillment in watching them grow and thrive." << std::endl;
                
                std::string q3;
                std::cout << "But then, you get the philosophical question: Do you or they even exist? Do you want to A: ignore it, or B: try to find out?" << std::endl;
                std::cin >> q3;
                
                if (q3 == "A" || q3 == "a") {
                    std::cout << "\033[2J \033[1;1H";
                    std::cout << "You ignore the question, focusing on the happiness and love you have in the present moment." << std::endl;
                }
                if (q3 == "B" || q3 == "b") {
                    std::cout << "\033[2J \033[1;1H";
                    std::cout << "You try to find out the answer to the question, delving deep into the mysteries of the simulation and the nature of reality." << std::endl;
                }
            }
            if (q2 == "B" || q2 == "b") {
                std::cout << "\033[2J \033[1;1H";
                std::cout << "You live a solitary life, finding peace and contentment in the quiet of the countryside. You spend your days in solitude, but never feel lonely." << std::endl;
            }
        }
        
        if (q1 == "B" || q1 == "b") {
            std::cout << "\033[2J \033[1;1H";
            std::cout << "You decide to live like always, enjoying the luxuries and comforts of your previous life. You continue to manage your businesses and enjoy the high life, but now with the added benefit of being in a simulation where you can control and customize your experiences even more." << std::endl;
            
            std::string q2;
            std::cout << "Do you want to A: expand your business empire, or B: explore new virtual experiences?" << std::endl;
            std::cin >> q2;
            
            if (q2 == "A" || q2 == "a") {
                std::cout << "\033[2J \033[1;1H";
                std::cout << "You decide to expand your business empire. With the limitless possibilities of the simulation, you quickly become the most powerful and influential person in the virtual world." << std::endl;
                
                std::string q3;
                std::cout << "Do you want to A: use your power for good, or B: indulge in your own desires?" << std::endl;
                std::cin >> q3;
                
                if (q3 == "A" || q3 == "a") {
                    std::cout << "\033[2J \033[1;1H";
                    std::cout << "You use your power for good, creating a utopia within the simulation where everyone can live happily and peacefully." << std::endl;
                }
                if (q3 == "B" || q3 == "b") {
                    std::cout << "\033[2J \033[1;1H";
                    std::cout << "You indulge in your own desires, creating a hedonistic paradise where you can fulfill all your fantasies." << std::endl;
                }
            }
            if (q2 == "B" || q2 == "b") {
                std::cout << "\033[2J \033[1;1H";
                std::cout << "You decide to explore new virtual experiences. You travel to different worlds, meet interesting characters, and have adventures beyond your wildest dreams." << std::endl;
                
                std::string q3;
                std::cout << "Do you want to A: settle down in one of these new worlds, or B: keep exploring?" << std::endl;
                std::cin >> q3;
                
                if (q3 == "A" || q3 == "a") {
                    std::cout << "\033[2J \033[1;1H";
                    std::cout << "You settle down in one of the new worlds, finding peace and contentment in your new surroundings." << std::endl;
                }
                if (q3 == "B" || q3 == "b") {
                    std::cout << "\033[2J \033[1;1H";
                    std::cout << "You keep exploring, always seeking out new experiences and adventures in the vast virtual universe." << std::endl;
                }
            }
        }
        }

    return 0;
}