#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "ENGINEERING DICTIONARY" << endl;
    cout << "NOTE: Type in all caps, avoid entering acronyms, and be mindful of hyphens. DO NOT INCLUDE SPACES. If error, term is not found, available or the entered word might have spaces." << endl;
    string a;
    cout << "Search: ";
    cin >> a;
    
    if (a == "ACCELARATION"){
        cout << "The rate at which an object’s velocity changes over time. It includes both speed and direction.";
    } else if (a == "ACCURACY"){
        cout << "The measurement of closeness to a true or standard value.";
    } else if (a == "ARTIFICIALINTELLIGENCE"){
        cout << "The demonstration of cognition by computers and machines.";
    } else if (a == "BRITTLENESS"){
        cout << "A mechanical property of an object that measures the degree to which a material will fracture without significant deformation when subjected to stress.";
    } else if (a == "COMPUTER-AIDEDDESIGN"){
        cout << "The digital creation of two-dimensional drawings and three-dimensional models using a computer system. This is used to easily create, modify, analyze, share and optimize a design, which enables faster iteration and innovation.";
    } else if (a == "COMPUTER-AIDEDMANUFACTURING"){
        cout << "A manufacturing method in which software and computer-controlled machines execute high-precision tasks to build products. CAM has enabled the automation of processes that require a high degree of accuracy, giving manufacturers better quality control.";
    } else if (a == "COMPUTERNUMERICALCONTROL"){
        cout << "A computer-controlled manufacturing process in which programming dictates tasks to a wide range of factory tools and machinery, from drills and grinders to lathes. It can be used for three-dimensional cutting projects, such as the formation of metal tools from a block of material.";
    } else if (a == "CODECOMPLIANCE"){
        cout << "The adherence to standardized area codes, from design standards to specifications and ordinances.";
    } else if (a == "DESIGNFORMANUFACTURABILITY"){
        cout << "A method of design optimization to facilitate straightforward and easy manufacturing with the goal of improving efficiencies so that costs are reduced but quality is not.";
    } else if (a == "ELECTRICALENGINEERING"){
        cout << "The study, design, and practical application of devices and systems that use electricity and electronics. This branch of engineering includes everything from circuitry and power generation to communications systems.";
    } else if (a == "ENGINEERING"){
        cout << "The application of scientific, mathematical, technological, economic, social, and practical knowledge to design and build structures, machines, devices, systems, materials, and processes.";
    } else if (a == "ENGINEERINGETHICS"){
        cout << "Guiding ethical principles in the field of engineering that govern how engineers interact with society, the environment, their clients, and the world.";
    } else if (a == "FEASIBILITYSTUDIES"){
        cout << "An analysis used to evaluate projects, including the identification of best methods and techniques, infrastructure needs, potential pitfalls, and environmental considerations.";
    } else if (a == "HEATTRANSFER"){
        cout << "A discipline of thermal engineering involving the generation, use, and exchange of thermal energy between material systems.";
    } else if (a == "INDUSTRIALENGINEERING"){
        cout << "An engineering sub-field dedicated to the optimization of complex processes and systems, particularly in the manufacturing industry. This includes the management of industrial resources such as labor, materials, and equipment to create efficient processes.";
    } else if (a == "INSTRUMENTATION"){
        cout << "Tools that measure physical quantities or dimensions, ranging from thermometers to devices with complex multi-sensor components.";
    } else if (a == "MACHINELEARNING"){
        cout << "The development of computer systems using algorithms, patterns and statistical models so that they begin to learn and improve automatically without human intervention.";
    } else if (a == "MATERIALSENGINEERING"){
        cout << "The design and discovery of new and existing materials through the study of properties, such as atom consistency and behavior, using math, physics and chemistry.";
    } else if (a == "MECHATRONICS"){
        cout << "A branch of engineering at the crossroads of mechanical, electronic, and computing that helps to improve efficiencies in manufacturing through technology and automation.";
    } else if (a == "NANOTECHNOLOGY"){
        cout << "The manufacture and manipulation of matter on an atomic and molecular scale to produce innovative materials and devices.";
    } else if (a == "PRECISION"){
        cout << "A characteristic of measurement that indicates the closeness of two or more measurements to each other, regardless of whether or not they are accurate. This defines the repeatability of a result under unchanged conditions.";
    } else if (a == "QUALITYASSURANCE"){
        cout << "The use of analysis and audit to ensure a company is meeting industry standards in manufacturing processes to help an entity prevent errors, defects, and problems.";
    } else if (a == "QUALITYCONTROL"){
        cout << "An active process of monitoring and detection that helps to identify defects before a manufactured good is sent out to end users, thereby verifying that deliverables have met quality standards.";
    } else if (a == "REPEATABILITY"){
        cout << "A reliability measurement that describes how well a system or part can repeatedly produce the same outcome in unchanged conditions.";
    } else if (a == "ROBOTICS"){
        cout << "The design, construction, operation, and use of programmable machines known as robots that can often mimic human actions and completely or semi-autonomously perform physical tasks.";
    } else if (a == "SEMICONDUCTOR"){
        cout << "A solid substance or material that has the ability to conduct electrical current between that of highly conductive materials, such as copper, and an insulator, such as glass.";
    } else if (a == "SOLIDMODELING"){
        cout << "The three-dimensional modeling of solids as aided by computer programming and mathematics to form a precise design through the application of geometric and topological measurements.";
    } else if (a == "STATISTICS"){
        cout << "The three-dimensional modeling of solids as aided by computer programming and mathematics to form a precise design through the application of geometric and topological measurements.";
    } else if (a == "TECHNICALDRAWING"){
        cout << "A precise and detailed drawing that visually communicates how an object functions or should be constructed.";
    } else if (a == "THERMODYNAMICS"){
        cout << "A branch of physics that studies the relationship between heat, temperature, and mechanical energy or work, including the conversion of one into the other, to understand the operation of a physical system.";
    } else{
        cout << "Term not found.";
    }
    
    return 0;
}





















