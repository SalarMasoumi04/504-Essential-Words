#include "maindatabase.h"
using namespace std;

vector<vector<vector<string>>> MainDataBase::words504 =
    {
        {
            {                             //-----------------------فصل اول--------------------------
                {
                    "Abandon",
                    "ترک کردن",
                    "When Roy abandoned his family, the police went looking for him",
                    "The soldier could not abandon his friends who were hurt in battle",
                    "Because Rose was poor, she had to abandon her idea of going to college"
                },
                {
                    "Keen",
                    "تیز",
                    "The butcher's keen knife cut through the meat",
                    "My dog has a keen sense of smell",
                    "Bill's keen mind pleased all his teachers"
                },
                {
                    "Jealous",
                    "حسود",
                    "A detective was hired by the jealous widow to find the boyfriend who had abandoned* her",
                    "Although my neighbor just bought a new car, I am not jealous of him",
                    "Being jealous, Mona would not let her boyfriend dance with any of the cheerleaders"
                },
                {
                    "Tact",
                    "تدبیر",
                    "My aunt never hurts anyone's feelings because she always uses tact",
                    "By the use of tact, Janet was able to calm her jealous* husband",
                    "Your friends will admire you if you use tact and thoughtfulness"
                },
                {
                    "Oath",
                    "سوگند",
                    "The president will take the oath of office tomorrow",
                    "In court, the witness took an oath that he would tell the whole truth",
                    "When Terry discovered that he had been abandoned,* he let out an angry oath"
                },
                {
                    "Vacant",
                    "خالی",
                    "Someone is planning to build a house on that vacant lot",
                    "I put my coat on that vacant seat",
                    "When the landlord broke in, he found that apartment vacant"
                },
                {
                    "Hardship",
                    "سختی",
                    "The fighter had to face many hardships before he became champion",
                    "Abe Lincoln was able to overcome one hardship after another",
                    "On account of hardship, Bert was let out of the army to take care of his sick mother"
                },
                {
                    "Gallant",
                    "شجاع",
                    "The pilot swore a gallant oath* to save his buddy",
                    "Many gallant knights entered the contest to win the princess",
                    "Ed is so gallant that he always gives up his subway seat to a woman"
                },
                {
                    "Data",
                    "اطلاعات",
                    "The data about the bank robbery were given to the F.B.I",
                    "After studying the data, we were able to finish our report",
                    "Unless you are given all the data, you cannot do the math problem"
                },
                {
                    "Unaccustomed",
                    "به چیزی عادت نداشتن",
                    "Coming from Alaska, Claude was unaccustomed to Florida's heat",
                    "The king was unaccustomed to having people disobey him",
                    "unaccustomed as he was to exercise, Vic quickly became tired"
                },
                {
                    "Bachelor",
                    "مجرد",
                    "My brother took an oath* to remain a bachelor",
                    "In the movie, the married man was mistaken for a bachelor",
                    "Before the wedding, all his bachelor friends had a party"
                },
                {
                    "Qualify",
                    "صلاحیت",
                    "I am trying to qualify for the job that is now vacant",
                    "Since Pauline can't carry a tune, she is sure that she will never qualify for the Girls' Chorus",
                    "You have to be taller than 5 15 to qualify as a policeman in our town"
                }
            },
            {                             //-----------------------فصل دوم-------------------------
                {
                    "Corpse",
                    "جسد",
                    "When given all the data* on the corpse, the professor was able to solve the murder",
                    "The corpse was laid to rest in the vacant* coffin",
                    "An oath* of revenge was sworn over the corpse by his relatives"
                },
                {
                    "Conceal",
                    "پنهان کردن",
                    "Tris could not conceal his love for Gloria",
                    "Count Dracula concealed the corpse* in his castle",
                    "The money was so cleverly concealed that we were forced to abandon* our search for it"
                },
                {
                    "Dismal",
                    "تاریک و دلگیر",
                    "When the weather is so dismal, I sometimes stay in bed all day",
                    "I am unaccustomed* to this dismal climate",
                    "As the dismal reports of the election came in, the senator's friends tactfully* made no mention of them"
                },
                {
                    "Frigid",
                    "خیلی سرد",
                    "It was a great hardship* for the men to live through the frigid winter at Valley Forge",
                    "The jealous* bachelor* was treated in a frigid manner by his girlfriend",
                    "Inside the butcher's freezer the temperature was frigid"
                },
                {
                    "Inhabit",
                    "اقامت داشتن در",
                    "Eskimos inhabit the frigid* part of Alaska",
                    "Because Sidney qualified,* he was allowed to inhabit the vacant* apartment",
                    "Many crimes are committed each year against those who inhabit the slum area of our city"
                },
                {
                    "Numb",
                    "بدون قدرت احساس",
                    "My fingers quickly became numb in the frigid* room",
                    "A numb feeling came over Mr. Massey as he read the telegram",
                    "When the nurse stuck a pin in my numb leg, I felt nothing"
                },
                {
                    "Peril",
                    "خطر",
                    "The hunter was abandoned* by the natives when he described the peril that lay ahead of them",
                    "There is great peril in trying to climb the mountain",
                    "Our library is filled with stories of perilous adventures"
                },
                {
                    "Recline",
                    "خوابیدن",
                    "Richard likes to recline in front of the television set",
                    "After recline on her right arm for an hour, Maxine found that it had become numb",
                    "My dog's greatest pleasure is to recline by the warm fireplace"
                },
                {
                    "Shriek",
                    "جیغ",
                    "The maid shrieked when she discovered the corpse",
                    "With a loud shriek, Ronald fled from the room",
                    "Facing the peril* of the waterfall, the boatman let out a terrible shriek"
                },
                {
                    "Sinister",
                    "پلید",
                    "The sinister plot to cheat the widow was uncovered by the police",
                    "When the bank guard spied the sinister-looking customer, he drew his gun",
                    "I was frightened by the sinister shadow at the bottom of the stairs"
                },
                {
                    "Tempt",
                    "وسوسه کردن",
                    "A banana split can tempt me to break my diet",
                    "The sight of beautiful Louise tempted the bachelor* to change his mind about marriage",
                    "Your offer of a job tempts me greatly"
                },
                {
                    "Wager",
                    "شرط",
                    "I lost a small wager on the Super Bowl",
                    "After winning the wager, Tex treated everyone to free drinks",
                    "It is legal to make a wager in the state of Nevada"
                }
            },
            {                             //------------------------فصل سوم------------------------
                {
                    "Typical",
                    "معمولی",
                    "The sinister* character in the movie wore a typical costume, a dark shirt, loud tie, and tight jacket.",
                    "The horse ran its typical race, a slow start and a slower finish, and my uncle lost his wager",
                    "It was typical of the latecomer to conceal* the real cause of his lateness"
                },
                {
                    "Minimum",
                    "کمترین مقدار",
                    "Studies show that adults need a minimum of six hours sleep",
                    "The minimum charge for a telephone, even if no calls are made, is about $60 a month",
                    "Congress has set a minimum wage for all workers"
                },
                {
                    "Scarce",
                    "کمیاب",
                    "Chairs that are older than one hundred years are scarce",
                    "Because there is little moisture in the desert, trees are scarce",
                    "How scarce are good cooks?"
                },
                {
                    "Annual",
                    "سالی یکبار",
                    "The annual convention of musicians takes place in Hollywood",
                    "The publishers of the encyclopedia put out a book each year called an annual",
                    "Plants that live only one year are called annuals"
                },
                {
                    "Persuade",
                    "راضی کردن",
                    "Can you persuade him to give up his bachelor* days and get married?",
                    "No one could persuade the captain to leave the sinking ship",
                    "Beth's shriek* persuaded jesse that she was in real danger"
                },
                {
                    "Essential",
                    "ضروری",
                    "The essential items in the cake are flour, sugar, and shortening",
                    "It is essential that we follow the road map",
                    "Several layers of thin clothing are essential to keeping warm in frigid* climates"
                },
                {
                    "Blend",
                    "مخلوط",
                    "The colors of the rainbow blend into one another",
                    "A careful blend of fine products will result in delicious food",
                    "When jose blends the potatoes together, they come out very smooth"
                },
                {
                    "Visible",
                    "قابل رویت",
                    "The ship was barely visible through the dense fog",
                    "Before the stars are visible, the sky has to become quite dark",
                    "You need a powerful lens to make some germs visible"
                },
                {
                    "Expensive",
                    "گران",
                    "Because diamonds are scarce* they are expensive",
                    "Margarine is much less expensive than butter",
                    "Shirley's expensive dress created a great deal of excitement at the party"
                },
                {
                    "Talent",
                    "توانایی ذاتی",
                    "Medori's talent was noted when she was in first grade",
                    "Feeling that he had the essential* talent, Carlos tried out for the school play",
                    "Hard work can often make up for a lack of talent"
                },
                {
                    "Devise",
                    "اختراع کردن",
                    "The burglars devised a scheme for entering the bank at night",
                    "I would like to devise a method for keeping my toes from becoming numb* while I am ice skating",
                    "If we could devise a plan for using the abandoned* building, we could save thousands of dollars"
                },
                {
                    "Wholesale",
                    "به میزان گسترده",
                    "The wholesale price of milk is six cents a quart lower than retail",
                    "Many people were angered by the wholesale slaughter of birds",
                    "By buying my eggs wholesale I save fifteen dollars a year"
                }
            },
            {                             //------------------------فصل چهارم------------------------
                {
                    "Vapor",
                    "غبار",
                    "Scientists have devised* methods for trapping vapor in bottles so they can study its makeup",
                    "He has gathered data* on the amount of vapor rising from the swamp",
                    "A vapor trail is the visible* stream of moisture left by the engines of a jet flying at high altitudes"
                },
                {
                    "Eliminate",
                    "حذف کردن",
                    "When the railroad tracks are raised, the danger of crossing will be eliminated",
                    "When figuring the cost of a car, don't eliminate such extras as air conditioning",
                    "If we were to eliminate all reclining* chairs, no one would fall asleep while watching television"
                },
                {
                    "Villian",
                    "آدم بسیار بدجنس و پست",
                    "A typical* moving picture villain gets killed at the end",
                    "The villain concealed* the corpse* in the cellar",
                    "When the villain fell down the well, everyone lived happily ever after"
                },
                {
                    "Dense",
                    "غلیظ",
                    "The dense leaves on the trees let in a minimum* of sunlight",
                    "We couldn't row because of the dense weeds in the lake",
                    "His keen* knife cut through the dense jungle"
                },
                {
                    "Utilize",
                    "استفاده کردن از",
                    "No one seems willing to utilize this vacant* house",
                    "The gardener was eager to utilize different flowers and blend* them in order to beautify the borders",
                    "Does your mother utilize leftovers in her cooking?"
                },
                {
                    "Humid",
                    "مرطوب",
                    "It was so humid in our classroom that we wished the school would buy an air conditioner",
                    "New Yorkers usually complain in the summer of the humid air",
                    "Most people believe that ocean air is quite humid"
                },
                {
                    "Theory",
                    "فرضیه",
                    "Einstein's theory is really too difficult for the average person to understand",
                    "My uncle has a theory about the effect of weather on baseball batters",
                    "No one has advanced a convincing theory explaining the beginnings ofwriting"
                },
                {
                    "Descend",
                    "پایین رفتن از مکانی بالا تر از سطحی پایین تر",
                    "If we let the air out of a balloon, it will have to descend",
                    "The pilot, thinking his plane was in peril,* descended quickly",
                    "Knowing her beau was waiting at the bottom of the staircase, Eleanor descended at once"
                },
                {
                    "Circulate",
                    "پخش شدن",
                    "A fan may circulate the air in summer, but it doesn't cool it",
                    "My father circulated among the guests at the party and made them feel comfortable",
                    "Hot water circulates through the pipes in the building, keeping the room warm"
                },
                {
                    "Enormous",
                    "عظیم",
                    "The enormous crab moved across the ocean floor in search of food",
                    "Public hangings once drew enormous crowds",
                    "The gallant* knight drew his sword and killed the enormous dragon"
                },
                {
                    "Predict",
                    "پیشگویی کردن",
                    "Weathermen can predict the weather correctly most of the time",
                    "Who can predict the winner of the Super Bowl this year?",
                    "Laura thought she could predict what I would do, but she was wrong"
                },
                {
                    "Vanish",
                    "محو شدن",
                    "Even in California the sun will sometimes vanish behind a cloud",
                    "Not even a powerful witch can make a jealous* lover vanish",
                    "Give him a week without a job and all his money will vanish"
                }
            },
            {                             //------------------------فصل پنجم------------------------
                {
                    "Tradition",
                    "باور ها",
                    "The father tried to persuade* his son that the tradition of marriage was important",
                    "All religions have different beliefs and traditions",
                    "As time goes on, we will eliminate* traditions that are meaningless"
                },
                {
                    "Rural",
                    "روستایی",
                    "Tomatoes are less expensive* at the rural farm stand",
                    "Rural areas are not densely* populated",
                    "The rural life is much more peaceful than the city one"
                },
                {
                    "Burden",
                    "بار",
                    "The burden of the country's safety is in the hands of the president",
                    "Irma found the enormous* box too much of a burden",
                    "Ricky carried the burden throughout his college career"
                },
                {
                    "Campus",
                    "دانشگاه یا مدرسه",
                    "The campus was designed to utilize* all of the college's buildings",
                    "Jeff moved off campus when he decided it was cheaper to live at home",
                    "I chose to go to Penn State because it has a beautiful campus"
                },
                {
                    "Majority",
                    "قسمت عمده",
                    "A majority of votes was needed for the bill to pass",
                    "The majority of people prefer to pay wholesale* prices for meat",
                    "In some countries, the government does not speak for the majority of the people"
                },
                {
                    "Assemble",
                    "جمع آوری کردن",
                    "The rioters assembled outside the White House",
                    "I am going to assemble a model of a spacecraft",
                    "All the people who had assembled for the picnic vanished* when the rain began to fall"
                },
                {
                    "Explore",
                    "بررسی کردن",
                    "Lawyer Spence explored the essential* reasons for the crime",
                    "The weather bureau explored the effects of the rainy weather",
                    "Sara wanted to know if all of the methods for solving the problem had been explored"
                },
                {
                    "Topic",
                    "مبحث",
                    "Predicting* the weather is our favorite topic of conversation",
                    "Valerie only discussed topics that she knew well",
                    "The speaker's main topic was how to eliminate* hunger in this world"
                },
                {
                    "Debate",
                    "بجثی که در آن دلایل موافق و مخالف چیزی مطرح میشود",
                    "The debate between the two candidates was heated",
                    "debate in the U.S. Senate lasted for five days",
                    "Instead of shrieking* at each other, the students decided to have a debate on the topic"
                },
                {
                    "Evade",
                    "با کلک یا زرنگی از چیزی دور شدن",
                    "Juan tried to evade the topic* by changing the subject",
                    "In order to evade the police dragnet, Ernie grew a beard",
                    "The prisoner of war evaded questioning by pretending to be sick"
                },
                {
                    "Probe",
                    "کاوش کردن",
                    "The lawyer probed the man's mind to see if he was innocent",
                    "After probing the scientist's theory,* we proved it was correct",
                    "King Henry's actions were carefully probed by the noblemen"
                },
                {
                    "Reform",
                    "بهتر کردن",
                    "After the prison riot, the council decided to reform the correctional system",
                    "Brad reformed when he saw that breaking the law was hurting people other than himself",
                    "Only laws that force companies to reform will clear the dangerous vapors* from our air"
                }
            },
            {                             //------------------------فصل ششم------------------------
                {
                    "Approach",
                    "نزدیک شدن به",
                    "The lawyers in the trial were often asked to approach the bench",
                    "Her beau kissed Sylvia when he approached her",
                    "Ben approached the burden* of getting a job with a new spirit"
                },
                {
                    "Detect",
                    "کشف کردن",
                    "Sam Spade detected that the important papers had vanished",
                    "From her voice it was easy to detect that Ellen was frightened",
                    "We detected from the messy room that a large group of people had assembled* there"
                },
                {
                    "Defect",
                    "عیب",
                    "My Chevrolet was sent back to the factory because of a steering defect",
                    "His theory* of the formation of our world was tilled with defects",
                    "The villain* was caught because his plan had many defects"
                },
                {
                    "Employee",
                    "کارمند",
                    "The employees went on strike for higher wages",
                    "My boss had to tire many employees when meat became scarce",
                    "Joey wanted to go into business for himself and stop being an employee"
                },
                {
                    "Neglect",
                    "خیلی کم اهمیت دادن یا توجه کردن به",
                    "The senator neglected to make his annual* report to Congress",
                    "Bob's car got dirty when he neglected to keep it polished",
                    "It is essential* that you do not neglect your homework"
                },
                {
                    "Deceive",
                    "گمراه کردن",
                    "Atlas was deceived about the burden* he had to carry",
                    "Virginia cried when she learned that her best friend had deceived her",
                    "The villain* deceived ChiefWhite Cloud by pretending to be his friend"
                },
                {
                    "Undoubtedly",
                    "قطعا",
                    "Ray's team undoubtedly had the best debators* in our county",
                    "The pilgrims undoubtedly assembled* to travel to Rome together",
                    "If she didn't want to get into an argument, Valerie would have followed the majority* undoubtedly"
                },
                {
                    "Popular",
                    "پرطرفدار",
                    "The Beatles wrote many popular songs",
                    "At one time miniskirts were very popular",
                    "Popular people often find it hard to evade* their many friends"
                },
                {
                    "Through",
                    "کامل",
                    "The police made a thorough search of the house after the crime had been reported",
                    "My science teacher praised Sandy for doing a thorough job of cleaning up the lab",
                    "Mom decided to spend the day in giving the basement a thorough cleaning"
                },
                {
                    "Client",
                    "مشتری",
                    "The lawyer told her client that she could predict* the outcome of his trial",
                    "My uncle tried to get General Motors to be a client of his company",
                    "If this restaurant doesn't improve its service, all its clients will vanish"
                },
                {
                    "Comprehensive",
                    "فراگیر",
                    "After a comprehensive exam, my doctor said I was in good condition",
                    "The engineer gave our house a thorough*, comprehensive checkup before my father bought it",
                    "Mrs. Silver wanted us to do a comprehensive study of Edgar Allan Poe"
                },
                {
                    "Defraud",
                    "کلاهبرداری کردن از",
                    "My aunt saved thousands of dollars by defrauding the government",
                    "If we could eliminate* losses from people who defraud the government, tax rates could be lowered",
                    "By defrauding his friend, Dexter ruined a family tradition* of honesty"
                }
            },
            {                             //------------------------فصل هفتم------------------------
                {
                    "Postpone",
                    "به تاخیر انداختن",
                    "The young couple wanted to postpone their wedding until they were sure they could handle the burdens* of marriage",
                    "I neglected* to postpone the party because I thought everyone would be able to come",
                    "The supermarket's owner planned to postpone the grand opening until Saturday"
                },
                {
                    "Consent",
                    "موافقت کردن",
                    "My teacher consented to let our class leave early",
                    "David would not consent to our plan",
                    "The majority* of our club members consented to raise the dues"
                },
                {
                    "Massive",
                    "بزرگ",
                    "The boss asked some employees* to lift the massive box",
                    "From lifting weights, Willie had developed massive arm muscles",
                    "The main building on the campus* was so massive that the new students had trouble finding their way around at first"
                },
                {
                    "Capsule",
                    "جعبه یا روکش کوچک",
                    "The small capsule contained notes the spy had written after the meeting",
                    "A new, untested medicine was detected* in the capsule by the police scientists",
                    "He explored* the space capsule for special equipment"
                },
                {
                    "Preserve",
                    "محافظت کردن",
                    "The lawyers wanted to preserve the newest reforms* in the law",
                    "Farmers feel that their rural* homes should be preserved",
                    "The outfielder's records are preserved in the Baseball Hall of Fame"
                },
                {
                    "Denounce",
                    "آشکارا محکوم کردن",
                    "The father denounced his son for lying to the district attorney",
                    "Some people denounce the government for probing* into their private lives",
                    "The consumer advocate denounced the defective* products being sold"
                },
                {
                    "Unique",
                    "بی همتا",
                    "Going to Africa was a unique experience for us",
                    "The inventor developed a unique method of making ice cream",
                    "Albie has a unique collection of Israeli stamps"
                },
                {
                    "Torrent",
                    "سیلاب",
                    "A massive* rain was coming down in torrents",
                    "In the debate,* a torrent of questions was asked",
                    "After trying to defraud* the public, Lefty was faced with a torrent of charges"
                },
                {
                    "Resent",
                    "از چیزی احساس آزردگی خاطر یا عصبانیت کردن",
                    "Bertha resented the way her boyfriend treated her",
                    "The earthquake victim resented the poor emergency care",
                    "Columbus resented the fact that his crew wanted to turn back"
                },
                {
                    "Molest",
                    "آزار دادن",
                    "My neighbor was molested when walking home from the subway",
                    "The gang did a thorough* job of molesting the people in the park",
                    "Lifeguards warned the man not to molest any of the swimmers"
                },
                {
                    "Gloomy",
                    "کم نور",
                    "My cousin was gloomy because his best friend had moved away",
                    "The reason Doris wasn't popular* was that she always had a gloomy appearance",
                    "jones Beach is not so beautiful on a gloomy day"
                },
                {
                    "Unforeseen",
                    "پیشبینی نشده",
                    "We had some unforeseen problems with the new engine",
                    "The probe* into the congressman's finances turned up some unforeseen difficulties",
                    "The divers faced unforeseen trouble in their search for the wreck"
                }
            },
            {                             //------------------------فصل هشتم------------------------
                {
                    "Exaggerate",
                    "مبالغه کردن",
                    "He wasn't trying to deceive* you when he said that his was the best car in the world; he was just exaggerating",
                    "The bookkeeper exaggerated her importance to the company",
                    "When he said that O'Neal was eight feet tall, he was undoubtedly* exaggerateing"
                },
                {
                    "Amatuer",
                    "آماتور",
                    "The amateur cross-country runner wanted to be in the Olympics",
                    "After his song, Don was told that he wasn't good enough to be anything but an amateur",
                    "Professional golfers resent* amateurs who think they are as good as the people who play for money"
                },
                {
                    "Mediocre",
                    "متوسط",
                    "After reading my composition, Mrs. Evans remarked that it was mediocre and that I could do better",
                    "Howard was a mediocre scientist who never made any unique* discoveries",
                    "The movie wasn't a great one; it was only mediocre"
                },
                {
                    "Variety",
                    "نابرابری",
                    "Eldorado Restaurant serves a wide variety of foods",
                    "The show featured a variety of entertainment",
                    "He faced unforeseen* problems for a variety of reasons"
                },
                {
                    "Valid",
                    "درست",
                    "The witness neglected* to give valid answers to the judge's questions",
                    "Rita had valid reasons for denouncing* her father's way of life",
                    "When Dave presented valid working papers, the foreman consented* to hiring him immediately"
                },
                {
                    "Survive",
                    "بقا یافتن",
                    "It was uncertain whether we would survive the torrent* of rain",
                    "Some people believe that only the strongest should survive",
                    "The space capsule* was built to survive a long journey in space"
                },
                {
                    "Weird",
                    "اسرار آمیز",
                    "She looked weird with that horrible makeup on her f",
                    "Allen felt that weird things were starting to happen when he entered the haunted house",
                    "Becky had a weird feeling after swallowing the pills"
                },
                {
                    "Promeinent",
                    "مشهور",
                    "My client* is a prominent businessperson",
                    "Napoleon is a prominent figure in the history of France",
                    "Her violet eyes were the prominent feature of the model's face"
                },
                {
                    "Security",
                    "عاری از خطر",
                    "Our janitor likes the security of having all doors locked at night",
                    "When the president travels, strict security measures are taken",
                    "Pablo wanted to preserve* the security of his lifestyle"
                },
                {
                    "Bulky",
                    "حجیم",
                    "Charley and Morty removed the bulky package from the car",
                    "The massive* desk was quite bulky and impossible to carry",
                    "His client* wanted an item that wasn't so bulky, Olsen told us"
                },
                {
                    "Reluctant",
                    "بی میل",
                    "It was easy to see that Herman was reluctant to go out and find a job",
                    "The patient was reluctant to tell the nurse the whole gloomy* truth",
                    "I was reluctant to give up the security* of family life"
                },
                {
                    "Obvious",
                    "آشکار",
                    "It was obvious that the lumberjack was tired after his day's work",
                    "The fact that Darcy was a popular* boy was obvious to all",
                    "The detective missed the clue because it was too obvious"
                }
            },
            {                             //------------------------فصل نهم------------------------
                {
                    "Vicinity",
                    "همسایگی",
                    "Living in the vicinity of New York, Jeremy was near many museums",
                    "The torrent* of rain fell only in our vicinity",
                    "We approached* the Baltimore vicinity by car"
                },
                {
                    "Century",
                    "قرن",
                    "George Washington lived in the eighteenth century",
                    "The United States is more than two centuries old",
                    "Many prominent* men have been born in this century"
                },
                {
                    "Rage",
                    "خشم شدید",
                    "Joan's bad manners sent her mother into a rage",
                    "In a fit of rage, Francine broke the valuable glass",
                    "The mayor felt a sense of rage about the exaggerations* in the press"
                },
                {
                    "Document",
                    "چیز دستنویس یا تایپ شده که درباره حقیقتی شواهد یا اطلاعات می دهد",
                    "Newly discovered documents showed that the prisoner was obviously* innocent",
                    "The documents of ancient Rome have survived* many centuries",
                    "We were reluctant* to destroy important documents"
                },
                {
                    "Conclude",
                    "تمام کردن",
                    "Most people are happy when they conclude their work for the day",
                    "The gloomy* day concluded with a thunderstorm",
                    "Work on the building could not be concluded until the contract was signed"
                },
                {
                    "Undeniable",
                    "غیر قابل انکار",
                    "The jury concluded* that the teenagers were undeniably guilty",
                    "It is undeniable that most professionals can beat any amateur",
                    "That Leon resented* Rita's good marks in school was undeniable"
                },
                {
                    "Resist",
                    "مقاومت کردن",
                    "Totie could not resist eating the chocolate sundae",
                    "Tight security* measures resisted Jimmy's entrance into the bank",
                    "Harold resisted the opportunity to poke fun at the weird* man"
                },
                {
                    "Lack",
                    "کاملا فاقد چیزی بودن",
                    "Your daily diet should not lack fruits and vegetables",
                    "His problem was that he lacked a variety* of talents",
                    "As an amateur* dancer, Vincent knew that he lacked the professional touch"
                },
                {
                    "Ignore",
                    "توجه نکردن ",
                    "Little Alice realized that if she didn't behave, her parents would ignore her",
                    "The student could not answer the question because he ignored the obvious* facts",
                    "Older brothers and sisters often feel ignored when their parents only spend time with a new baby"
                },
                {
                    "Challenge",
                    "به مبارزه طلبیدن",
                    "Aaron Burr challenged Alexander Hamilton to a duel",
                    "No one bothered to challenge the prominent* lawyer",
                    "Trying to become a doctor was quite a challenge, Dick discovered"
                },
                {
                    "Miniature",
                    "کوچک",
                    "The young boy wanted a miniature sports car for his birthday",
                    "Instead of buying a massive* dog, Teddy got a miniature poodle",
                    "We were seeking a miniature model of the bulky* chess set"
                },
                {
                    "Source",
                    "منبع",
                    "The college student knew that he needed more than a basic textbook as a source for his report",
                    "The source of Buddy's trouble was boredom",
                    "Professor Smith's speech was a valid* source of information on chemistry"
                }
            },
            {                             //------------------------فصل دهم------------------------
                {
                    "Excel",
                    "برتری داشتن",
                    "Because he was so small, Larry could not excel in sports",
                    "At least Hannah had the security* of knowing that she excelled in swimming",
                    "Clarence Darrow wanted to become a prominent* lawyer, but he felt that he must first excel in the study of history"
                },
                {
                    "Feminine",
                    "زنانه",
                    "When my sister wants to look feminine she changes from dungarees into a dress",
                    "Aunt Sarah can always be counted on to give the feminine viewpoint",
                    "My brother is ashamed to cry at a sad movie because people might think he is behaving in a feminine manner"
                },
                {
                    "Mount",
                    "بالا رفتن از",
                    "Congressman Jones mounted the platform to make his speech",
                    "The watchman mounted the tower to see if there were any people in the vicinity",
                    "My sister couldn't mount the horse so they gave her a pony instead"
                },
                {
                    "Compete",
                    "رقابت کردن",
                    "The former champion was challenged* to compete for the tennis title",
                    "The runner was reluctant* to compete in front of his parents for the first time",
                    "When the amateur* became a pro he had to compete against better men"
                },
                {
                    "Dread",
                    "خیلی ترسیدن",
                    "The poor student dreaded going to school each morning",
                    "He had a dread feeling about the challenge* he was about to face",
                    "I dread going into that deserted house"
                },
                {
                    "Masculine",
                    "مردانه",
                    "The boy became more masculine as he got older.",
                    "It is undeniable* that his beard makes him look masculine",
                    "The girls liked Jerry because of his masculine ways"
                },
                {
                    "Menace",
                    "تهدید",
                    "lrv's lack* of respect made him a menace to his parents",
                    "The torrents* of rain were a menace to the farmer's crops",
                    "Sergeant Foy's raw language was an obvious* menace to the reputation of the entire police department"
                },
                {
                    "Tendency",
                    "گرایش",
                    "My algebra teacher has a tendency to forget the students' names",
                    "His tendency was to work hard in the morning and then to take it easy in the afternoon",
                    "The tendency in all human beings is to try to survive"
                },
                {
                    "Understimate",
                    "دست کم گرفتن",
                    "I admit that I underestimated the power in the bulky* fighter's frame",
                    "Undoubtedly* the boss underestimated his employee's* ability to work hard",
                    "The value of our house was underestimated by at least two thousand dollars"
                },
                {
                    "Victorious",
                    "پیروز",
                    "Playing in New Jersey, the Jets were victorious two years in a row",
                    "Terry faced the challenge* with the bad attitude that he could not be victorious",
                    "Our girls' volleyball squad was victorious over a taller team"
                },
                {
                    "Numerous",
                    "متعدد",
                    "Critics review numerous movies every week",
                    "Dr. Fischer had resisted* accepting money from the poor woman on numerous house calls",
                    "The debater* used numerous documents* to back up his statements"
                },
                {
                    "Flexible",
                    "انعطاف پذیر",
                    "The toy was flexible, and the baby could bend it easily",
                    "Remaining flexible, Nick listened to arguments from both sides",
                    "A mouse's flexible body allows it to squeeze through narrow openings"
                }
            },
            {                             //------------------------فصل یازدهم------------------------
                {
                    "Evidence",
                    "شواهد",
                    "Each juror felt he needed more evidence before voting to convict the former football star",
                    "Her many awards were evidence enough that Leona excelled*  in dancing",
                    "Our teacher ignored* the evidence that Simon had cheated on the test"
                },
                {
                    "Solitary",
                    "انفرادی",
                    "Sid's solitary manner kept him from making new friendships",
                    "There was not a solitary piece of evidence* that Manuel had eaten the cheesecake",
                    "The convict went into a rage* when he was placed in a solitary cell"
                },
                {
                    "Vision",
                    "حس بینایی",
                    "With the aid of the binoculars, my vision improved enough to see the entire vicinity",
                    "Ted had perfect vision, and that helped to make him a good baseball player",
                    "The glasses that Irma bought corrected her nearsighted vision."
                },
                {
                    "Frequent",
                    "مکرر",
                    "We made frequent visits to the hospital to see our grandfather",
                    "On frequent occasions Sam fell asleep in class",
                    "Dr. Bonner gave me some pills for my frequent headaches"
                },
                {
                    "Glimpse",
                    "نگاه کوتاه و سریع",
                    "This morning we caught our first glimpse of the beautiful shoreline",
                    "One glimpse of the very feminine* vision* was enough to tell Romeo that he loved juliet",
                    "The tall shrubs kept us from getting a glimpse of the new people who inhabited* the beach house"
                },
                {
                    "Recent",
                    "اخیر",
                    "At a recent meeting, the Board of Education provided the evidence* we had been asking for",
                    "Bessie liked the old silent movies better than the more recent ones",
                    "Recent studies have concluded* that more people are unemployed than ever before"
                },
                {
                    "Decade",
                    "دهه",
                    "After a decade of granting salary increases, my boss ended the practice",
                    "Many people moved out of this city in the last decade",
                    "I have a vision* that this decade will be better than the last one"
                },
                {
                    "Hesitate",
                    "مردد بودن",
                    "Nora hesitated to accept the challenge",
                    "When he got to the robbers' vicinity,* he hesitated before going on",
                    "The proverb tells us that he who hesitates is lost"
                },
                {
                    "Absurd",
                    "احمقانه",
                    "It was absurd to believe the fisherman's tall tale",
                    "The flabby boy realized that the suggestion to diet was not absurd",
                    "Underestimating* the importance of reading is absurd"
                },
                {
                    "Conflict",
                    "عدم توافق",
                    "Our opinions about the company's success in the last decade* are in conflict with what the records show",
                    "There was a noisy conflict over who was the better tennis player",
                    "The class mediation team was invited to settle the conflict"
                },
                {
                    "Minority",
                    "کمتر از نصف",
                    "Only a small minority of the neighborhood didn't want a new park",
                    "A minority of our athletes who competed* in the Olympics were victorious",
                    "Native Americans are a minority group in the United States"
                },
                {
                    "Fiction",
                    "خیالبافی",
                    "The story that the president had died was fiction",
                    "We hardly ever believed Vinny because what he said was usually fiction",
                    "Marge enjoys reading works of fiction rather than true stories"
                }
            },
            {                             //------------------------فصل دوازدهم------------------------
                {
                    "Ignite",
                    "مشتعل کردن",
                    "Spark plugs ignite in an automobile engine",
                    "One match can ignite an entire forest",
                    "A, careless remark helped to ignite the conflict* between the brothers and the sisters"
                },
                {
                    "Abolish",
                    "خاتمه دادن به",
                    "The death penalty has recently* been abolished in our state",
                    "We abolished numerous* laws that didn't serve any purpose in this decade",
                    "My school has abolished final exams altogether"
                },
                {
                    "Urban",
                    "از شهر یا مربوط به شهر",
                    "Many businesses open offices in urban areas",
                    "I plan to exchange my urban location for a rural* one",
                    "Only a small minority* of the people of the United States live far from any urban area"
                },
                {
                    "Population",
                    "جمعیت",
                    "China has the largest population of any country",
                    "The population of the world ha<:> increased in every decade",
                    "After the recent* floods, the population of Honduras was reduced by 10,000"
                },
                {
                    "Frank",
                    "در بیان اندییشه ها",
                    "Never underestimate* the value of being frank with one another",
                    "Eretha was completely frank when she told her friend about the sale",
                    "People liked Duffy because they knew he would be frank with them"
                },
                {
                    "Pollute",
                    "آلوده کردن",
                    "The Atlantic Ocean is in danger of becoming polluted",
                    "There is much evidence* to show that the air we breathe is polluted",
                    "It is claimed that soap powders pollute the water ':Ne drink"
                },
                {
                    "Reveal",
                    "آشکار ساختن",
                    "Napoleon agreed to reveal the information to the French population",
                    "The evidence* was revealed only after hours of questioning",
                    "The auto company revealed reluctantly* that there were defects* in their new models"
                },
                {
                    "Prohibit",
                    "قانونا منع کردن",
                    "Elvin's manager prohibited him from appearing on television",
                    "Many homeowners prohibit others from walking on their property",
                    "The law prohibits the use of guns to settle a conflict"
                },
                {
                    "Urgent",
                    "مهم",
                    "An urgent telephone call was made to the company's treasurer",
                    "The principal called an urgent meeting to solve the school's numerous* problems",
                    "When he heard the urgent cry for help, the lifeguard did not hesitate"
                },
                {
                    "Adequate",
                    "کاملا کافی",
                    "Rover was given an adequate amount of food to last him the whole day",
                    "A bedroom, kitchen, and bath were adequate shelter for his living needs"
                    "Carlos was adequate at his job but he wasn't great"
                },
                {
                    "Decrease",
                    "کاهش دادن",
                    "As he kept spending money, the amount he had saved decreased",
                    "In order to improve business, the store owner decreased his prices",
                    "The landlord promised to decrease our rent"
                },
                {
                    "Audible",
                    "قابل شنیدن",
                    "From across the room, the teacher's voice was barely audible",
                    "After Len got his new hearing aid, my telephone calls became audible",
                    "Commands from Ann's drill sergeant were always easily audible"
                }
            },
            {                             //------------------------فصل سیزدهم------------------------
                {
                    "Journalist",
                    "روزنامه نگار",
                    "There were four journalists covering the murder story",
                    "Barbara's experience working at a book store wasn't adequate* preparation for becoming a journalist",
                    "journalists must have a comprehensive* knowledge* of the city here they work"
                },
                {
                    "Famine",
                    "گرسنگی",
                    "famine in Africa caused the death of one tenth of the population",
                    "There has been a famine of good writing in the last decade",
                    "The rumor of a famine in Europe was purely fiction"
                },
                {
                    "Revive",
                    "زنده کردن یا به هوش اوردن",
                    "There is a movement to revive old plays for modern audiences",
                    "The nurses tried to revive the heart attack victim",
                    "Committees are trying to revive interest in population* control"
                },
                {
                    "Commence",
                    "آغاز کردن",
                    "Graduation will commence at ten o'clock",
                    "Bella hesitated* before commenceing her speech",
                    "The discussion commenced with a report on urban* affairs"
                },
                {
                    "Observant",
                    "تیزبین",
                    "We were observant of the conflict* between the husband and his wife",
                    "Because Cato was observant, he was able to reveal* the thiefs name",
                    "Milt used his excellent vision* to be observant of everything in his vicinity"
                },
                {
                    "Identify",
                    "شناسایی کردن",
                    "Numerous* witnesses identifyied the butcher as the thief",
                    "Mrs. Shaw was able to identify the painting as being hers",
                    "With only a quick glimpse,* Reggie was able to identify his girlfriend in the crowd"
                },
                {
                    "Migrate",
                    "مهاجرت کردن",
                    "The fruit pickers migrated to wherever they could find work",
                    "Much of our population* is constantly migrating to other areas of the country",
                    "My grandfather migrated to New York from Italy in 1919"
                },
                {
                    "Vessel",
                    "ظرف تو خالی یا رگ",
                    "The Girl Scouts were permitted a glimpse* of the vessel being built when they toured the Navy Yard",
                    "My father burst a blood vessel when he got the bill from the garage",
                    "Congress voted to decrease* the amount of money being spent on space vessels"
                },
                {
                    "Persist",
                    "قاطعانه ادامه دادن",
                    "The humid* weather persisted all summer",
                    "Would Lorraine's weird* behavior persist, we all wondered",
                    "Lloyd persisted in exaggerating* everything he said"
                },
                {
                    "Hazy",
                    "مه آلود",
                    "The vicinity* of London is known to be hazy",
                    "Factories that pollute* the air create hazy weather conditions",
                    "Although Cora had a great memory, she was unusually hazy about the details of our meeting on January 16th"
                },
                {
                    "Gleam",
                    "درخشش",
                    "A gleam of light shone through the prison window",
                    "The only source* of light in the cellar came in the form of a gleam through a hole in the wall",
                    "My grandmother gets a gleam in her eyes when she sees the twins"
                },
                {
                    "Editor",
                    "ویرایشگر",
                    "The student was proud to be the editor of the school newspaper",
                    "Meredith's journalistic knowledge* came in handy when she was unexpectedly given the job of editor of The Bulletin",
                    "It is undeniable* that the magazine has gotten better since Ellis became editor"
                }
            },
            {                             //------------------------فصل چهاردهم------------------------
                {
                    "Unruly",
                    "نافرمان",
                    "unruly behavior is prohibited* at the pool",
                    "When he persisted* in acting unruly, Ralph was fired from his job",
                    "His unruly actions were a menace* to those who were trying to work"
                },
                {
                    "Rival",
                    "رقیب",
                    "The boxer devised* an attack that would help him to be victorious* over his young rival",
                    "Sherry didn't like to compete* because she always thought her rival would win",
                    "Seidman and Son decided to migrate* to an area where they would have fewer rivals"
                },
                {
                    "Violent",
                    "خشن",
                    "Carefully, very carefully, we approached* the violent man",
                    "violent behavior is prohibited* on school grounds",
                    "Vernon had a tendency* to be violent when someone angered him"
                },
                {
                    "Brutal",
                    "بیرحم",
                    "Dozens of employees* quit the job because the boss was brutal to them",
                    "The brutal track coach persisted* in making the team work out all morning under the hot sun",
                    "Swearing to catch the murderer, the detectives revealed* that it had been an unusually brutal, violent* crime"
                },
                {
                    "Opponent",
                    "طرف دیگر جنگ",
                    "The Russian chess player underestimated* his opponent and lost",
                    "He was a bitter opponent of costly urban* reform",
                    "Seeing his flabby* opponent, Slugger was sure he would be victorious"
                },
                {
                    "Brawl",
                    "بحث یا جنگ پر صر و صدا",
                    "The journalist* covered all the details of the brawl in the park",
                    "Larry dreaded* a brawl with his father over finding a job",
                    "What started out as a polite discussion soon became a violent* brawl"
                },
                {
                    "Duplicate",
                    "کپی دقیق",
                    "Elliott tried to deceive* Mrs. Held by making a duplicate of my paper",
                    "We duplicated the document* so that everyone had a copy to study",
                    "The so-called expert did a mediocre* job of duplicaeting the Van Gogh painting"
                },
                {
                    "Vicious",
                    "بدجنس",
                    "Liza was unpopular* because she was vicious to people she had just met",
                    "The vicious editor* published false stories about people he disliked",
                    "Mr. Voss was reluctant* to talk about his vicious pit bull"
                },
                {
                    "Whirling",
                    "چرخیدن",
                    "The space vessel* was whirling around before it landed on earth",
                    "As they tried to lift the bulky* piano, the movers went whirling across the living room",
                    "Because Angelo drank too much, he commenced* to feel that everything was whirling around the bar"
                },
                {
                    "Underdog",
                    "بازنده",
                    "Minority* groups complain about being the underdogs in this century",
                    "I always feel sorry for the underdog in a street fight",
                    "The Jets were identified* as underdogs even though they had beaten the Steelers earlier in the season"
                },
                {
                    "Thrust",
                    "پرتاب کردن",
                    "Once the jet engine was ignited,* it thrust the rocket from the ground",
                    "He had adequate* strength to thrust himself through the locked door",
                    "Eva was in a terrible rage* when she thrust herself into the room"
                },
                {
                    "Bewildered",
                    "مبهوت",
                    "The lawyer was bewildered by his client's* lack* of interest in the case",
                    "His partner's weird* actions left Jack bewildered",
                    "bewildered by the sudden hazy* weather, he decided not to go to the beach"
                }
            },
            {                             //------------------------فصل پانزدهم------------------------
                {
                    "Expand",
                    "بزرگ شدن",
                    "We will expand our business as soon as we locate a new building",
                    "Present laws against people who pollute* the air must be expanded",
                    "expanding the comic strips, the editor* hoped that more people would buy his paper"
                },
                {
                    "Alter",
                    "تغییر کردن",
                    "I altered my typical* lunch and had a steak instead",
                    "Dorothy agreed to alter my dress if I would reveal* its cost to her",
                    "It's absurd* to spend money to alter that old candy store"
                },
                {
                    "Mature",
                    "رسیده",
                    "I could tell that Mitch was mature from the way he persisted* in his work",
                    "Only through mature study habits can a person hope to gain knowledge",
                    "It is essential* that you behave in a mature way in the business world"
                },
                {
                    "Sacred",
                    "مقدس",
                    "Her sacred medal had to be sold because the family was in urgent* need of money",
                    "It was revealed* by the journalist* that the sacred temple had been torn down",
                    "Kate made a sacred promise to her parents never to miss a Sunday church service"
                },
                {
                    "Revise",
                    "به روز کردن",
                    "My family revised its weekend plans when the weather turned hazy",
                    "The dictionary was revised and then published in a more expensive* edition",
                    "Under the revised rules, Shane was eliminated* from competing"
                },
                {
                    "Pledge",
                    "قول دادن",
                    "Before the grand jury, the sinister* gangster pledged to tell the whole truth",
                    "Monte was reluctant* to pledge his loyalty* to his new girlfriend",
                    "Pledged to discovering the facts, the journalist* began to dig up new evidence* for his readers"
                },
                {
                    "Casual",
                    "غیر منتظره",
                    "As the villain* stole the money from the blind man, he walked away in a casual manner",
                    "The bartender made a casual remark about the brawl* in the backroom",
                    "Following a casual meeting on the street, the bachelor* renewed his friendship with the widow"
                },
                {
                    "Pursue",
                    "پیروی کردن",
                    "We pursued the bicycle thief until he vanished* from our vision",
                    "Ernie rowed up the river, pursuing it to its source",
                    "The senior wanted to pursue urban* affairs as his life's work"
                },
                {
                    "Unanimous",
                    "هم رای",
                    "The class was unanimous in wanting to eliminate* study halls",
                    "There has never been an election in our union that was won by a unanimous vote",
                    "The Senate, by a unanimous vote, decided to decrease* taxes"
                },
                {
                    "Fortunate",
                    "خوش شانس",
                    "Wesley was fortunate to have an adequate* sum of money in the bank",
                    "It is fortunate that the famine* did not affect our village",
                    "The underdog* was fortunate enough to come out a winner"
                },
                {
                    "Pioneer",
                    "پیشگام",
                    "My grandfather was a pioneer in selling wholesale* products",
                    "England was a pioneer in building large vessels* for tourists",
                    "In the fourth grade I assembled* a picture collection of great American pioneers"
                },
                {
                    "Innovative",
                    "نوین",
                    "The innovative ads for the computers won many new customers",
                    "Everyone in our office praised the boss for his innovative suggestions",
                    "Nicole decided to alter* her approach and become more innovative"
                }
            },
            {                             //------------------------فصل شانزدهم------------------------
                {
                    "Slender",
                    "اندک",
                    "Carlotta's slender figure made her look somewhat taller than she was",
                    "There was only a slender chance that you could conceal* the truth",
                    "The slender thief was able to enter the apartment through the narrow window"
                },
                {
                    "Surpass",
                    "بهتر بودن از",
                    "The machines of the twenty-first century* surely surpass those of earlier times",
                    "Most farmers believe that rural* life far surpasses urban* living",
                    "It is undeniable* that a cold lemonade in july cannot be surpassed"
                },
                {
                    "Vast",
                    "بسیار زیاد",
                    "Daniel Boone explored* vast areas that had never been settled",
                    "Our campus* always seems vast to new students",
                    "vast differences between the two sides were made clear in the debate"
                },
                {
                    "Doubt",
                    "باور نکردن",
                    "Scientists doubt that a total cure for cancer will be found soon",
                    "The question of whether he could survive* the winter was left in doubt",
                    "We don't doubt that the tradition* of marriage will continue"
                },
                {
                    "Capacity",
                    "ظرفیت",
                    "A sign in the elevator stated that its capacity was 1100 pounds",
                    "The gasoline capsule* had a capacity of 500 gallons",
                    "So well-liked was the prominent* speaker that the auditorium was filled to capacity when he began his lecture"
                },
                {
                    "Penetrate",
                    "داخل یا وارد شدن",
                    "We had to penetrate the massive* wall in order to hang the mirror",
                    "Although Kenny tried to pound the nail into the rock with a hammer, he couldn't penetrate the hard surface",
                    "The thieves penetrated the bank's security* and stole the money"
                },
                {
                    "Pierce",
                    "وارد شدن",
                    "My sister is debating* whether or not to get her ears pierced",
                    "I tried to ignore* his bad violin playing, but the sound was pierceing",
                    "Halloran violently* pierced the skin of his rival,* causing massive* bleeding"
                },
                {
                    "Accurate",
                    "دقیق",
                    "Ushers took an accurate count of the people assembled* in the theater",
                    "Emma's vision* was so accurate that she didn't need glasses",
                    "In writing on the topic,* Vergil used accurate information"
                },
                {
                    "Microscope",
                    "میکروسکوپ",
                    "The students used a microscope to see the miniature* insect",
                    "When young Oprah's birthday came around, her uncle gave her a microscope",
                    "Using a microscope, the scientist was able to probe* into the habits of germs"
                },
                {
                    "Grateful",
                    "احساس قدردانی",
                    "The majority* of pupils felt grateful for Mr. Ash's help",
                    "We were grateful that the gloomy* weather cleared up on Saturday",
                    "In his letter, Waldo told how grateful he was for the loan"
                },
                {
                    "Cautious",
                    "بسیار دقیق",
                    "Be cautious when you choose your opponent",
                    "Good authors are cautious not to exaggerate* when they write",
                    "If the rain is failing in torrents,* it is best to drive cautiously"
                },
                {
                    "Confident",
                    "معتقد سفت و سخت",
                    "judge Emery was confident he could solve the conflict",
                    "When he lifted the burden,* Scotty was confident he could carry it",
                    "Annette was confident she would do well as a nurse"
                }
            },
            {                             //------------------------فصل هفدهم------------------------
                {
                    "Appeal",
                    "جذابیت",
                    "Anything jorge could get at wholesale* price had a great appeal for him",
                    "My boss always appeals to his employees* to work swiftly and neatly",
                    "I found her clothing designs to be enormously* appealing"
                },
                {
                    "Addict",
                    "معتاد",
                    "Because he was a heroin addict, it was essential* for Carlos to get the drug each day",
                    "Marcia became flabby* because she was addicted to ice cream sodas",
                    "Those who take aspirins and other pain-killers regularly should realize that they may become drug addicts, too"
                },
                {
                    "Wary",
                    "محتاط",
                    "Marilyn's mother told her to be wary of strangers",
                    "After Orlando had been the victim of a cheat, he was wary of those who said they wanted to help him",
                    "Living in a polluted* city makes you wary of the air you breathe"
                },
                {
                    "Aware",
                    "آگاه",
                    "Donna was aware of her tendency* to exaggerate",
                    "It was some time before the police became aware of the brawl* that was taking place on the street",
                    "One way to gain knowledge* is to be aware of everything around you"
                },
                {
                    "Misfortune",
                    "بد شانسی",
                    "It was my misfortune that our car wasn't thoroughly* checked before the trip through the desert",
                    "Being bitten by the vicious* dog was quite a misfortune for Tommy",
                    "I had the misfortune of working for a greedy* man"
                },
                {
                    "Avoid",
                    "دوری کردن از",
                    "If you are fortunate* you can avoid people who are trying to deceive* you",
                    "There was no way to avoid noticing her beautiful green eyes",
                    "Avoid getting into a brawl* if you can"
                },
                {
                    "Wretched",
                    "بسیار نامطلوب",
                    "I feel wretched after a night when I've scarcely* slept",
                    "There was unanimous* agreement that we had seen a wretched movie",
                    "Toby had wretched luck at the gambling tables"
                },
                {
                    "Keg",
                    "بشکه ای کوچک",
                    "The corner saloon uses numerous* kegs of beer on a Saturday night",
                    "Get a keg of nails, the carpenter shouted at me",
                    "It is obvious* to me that the situation is filled with peril,* a real powder keg if I ever saw one"
                },
                {
                    "Nourish",
                    "تغذیه کردن",
                    "A diet of nourishing food is served to every hospital patient",
                    "It was easy to detect* that the skinny boy was not well nourished",
                    "After the operation, our doctor plans to nourish my mother with vitamins and good food"
                },
                {
                    "Harsh",
                    "تند",
                    "The law is harsh on people who go around menacing* others",
                    "Looking at his cigarette, Phil realized it was absurd* to inhale such harsh smoke",
                    "Hazel altered* her tone of voice from a harsh one to a soft tone"
                },
                {
                    "Quantity",
                    "مقدار",
                    "I never neglect* to carry a small quantity of money with me",
                    "Who believes that quantity is better than quality",
                    "A large quantity of meat is always stored in our freezer",
                },
                {
                    "Opt",
                    "برگزیدن",
                    "If you give me an ice cream choice, I'll opt for chocolate",
                    "Our cheerleaders plan to opt for new sweaters",
                    "On Friday, three of my buddies will opt to go into the navy"
                }
            },
            {                             //------------------------فصل هجدهم------------------------
                {
                    "Tragedy",
                    "نمایش غم انگیز",
                    "It was a tragedy that some pioneers* were killed on their way west",
                    "If you had your choice between seeing a comedy or a tragedy, which play would you choose",
                    "Harry's enormous* jealousy* led to the tragedy in their family"
                },
                {
                    "Pedestrian",
                    "عابر پیاده",
                    "After driving a bus all day, Norris liked to be a pedestrian and take long, casual* walks in the evening",
                    "The police say it is urgent* that pedestrians stay on the sidewalk",
                    "I don't doubt* that a pedestrian can get places faster than a car in downtown traffic"
                },
                {
                    "Glance",
                    "نگاه سریع",
                    "The observant* driver glanced at the accident at the side of the road",
                    "I took one glance at the wretched* animal and turned away",
                    "Thompson identified* the burglar after a glance at the photograph in the police station"
                },
                {
                    "Budget",
                    "مقداری پول مصرفی",
                    "We had to decrease* the budget this year because our club is broke",
                    "The prominent* executive presented her budget to the Board of Directors",
                    "When my mother draws up her budget for the week, she sets aside a goodly sum for nourishing* food"
                },
                {
                    "Nimble",
                    "سبک و سریع",
                    "Although Dusty was a miniature* poodle, he was nimble enough to fight bigger dogs",
                    "The nimble policeman leaped over the fence to pursue* the car thief",
                    "With my nimble fingers, I'm good at text messaging"
                },
                {
                    "Manipulate",
                    "ماهرانه برخورد کردن",
                    "Scientists must know how to manipulate their microscopes",
                    "While Mr. Baird manipulated the puppets, Fran spoke to the audience",
                    "The wounded pilot manipulated the radio dial until he made contact"
                },
                {
                    "Reckless",
                    "بی دقت",
                    "We must not ignore* reckless drivers; we must take them off the road",
                    "After breaking his hand fighting recklessly, Arthur decided to be more cautious* in the future",
                    "The reckless smoker ignited* the entire forest"
                },
                {
                    "Horrid",
                    "وحشتناک",
                    "Janey avoided* staring at the horrid man's face",
                    "It is simply horrid the way cars pollute* the air we breathe",
                    "When Mary was good, she was very good, but when she was bad, she was horrid"
                },
                {
                    "Rave",
                    "وحشیانه حرف زدن",
                    "Shortly after taking the drug, the addict* began to rave and foam at the mouth",
                    "Speedy raved that his car had the capacity* to reach 120 miles per hour",
                    "Sadie was confident* that Mr. Stebbe would rave about her essay"
                },
                {
                    "Economical",
                    "صرفه جو",
                    "I find it economical to shop in the large supermarkets",
                    "Marissa was praised for her economical management of the budget",
                    "The President made Congress aware* of the need to be more economical"
                },
                {
                    "Lubricate",
                    "روغن کاری کردن",
                    "The bulky* wheels of a railroad train must be lubricated each week",
                    "A large quantity* of grease is needed to lubricate an airplane engine",
                    "When an engine is lubricated, it works much better"
                },
                {
                    "Ingenious",
                    "زرنگ",
                    "Bernie devised* an ingenious plan to cheat on his income tax",
                    "Rube Goldberg was a journalist* who won fame for his ingenious inventions",
                    "The master spy had an ingenious way of passing secrets to the agent"
                }
            },
            {                             //------------------------فصل نوزدهم------------------------
                {
                    "Harvest",
                    "جمع آوری غلات",
                    "This year's harvest was adequate* to feed all our people",
                    "The farmer decided to expand* his fields so that he would get a bigger harvest",
                    "If the harvest is poor, there is always the possibility of a famine"
                },
                {
                    "Abundant",
                    "بسیار فراوان",
                    "It is urgent* that the hospital have an abundant supply of blood",
                    "An abundant harvest* was predicted* by the secretary of agriculture",
                    "In recent* years an abundant number of complaints have disturbed the telephone company"
                },
                {
                    "Uneasy",
                    "نگران",
                    "Mrs. Spinner was uneasy about letting her son play in the vicinity * of the railroad tracks",
                    "The treasurer was uneasy about the company's budget",
                    "Arnold felt uneasy about the meeting even though he tried to act in a casual * manner"
                },
                {
                    "Calculate",
                    "حساب کردن",
                    "The cook had to calculate the number of diners to see whether he could decrease * his order for meat",
                    "In order to see how expensive* the car was, the buyer calculated the tax and other charges",
                    "I used an abacus to calculate my average"
                },
                {
                    "Absorb",
                    "بسیار علاقه مند کردن",
                    "The sponge absorbed the beer which had leaked from the keg",
                    " Our bodies must absorb those things which will nourish* them",
                    " I became absorbed in what the teacher was saying and did not hear the bell ring"
                },
                {
                    "Estimate",
                    "حدس زدن",
                    "The driver estimated that the auto race would commence* at nine o'clock",
                    "I try to avoid* making estimates on things I know nothing about",
                    "In your estimate, who will be victorious* in this conflict?"
                },
                {
                    "Morsel",
                    "گاز کوچک",
                    " When Reynaldo went into the restaurant, he pledged* to eat every morsel on his plate",
                    "Suzanne was reluctant* to try even a morsel of the lobster",
                    " If you had a morsel of intelligence, you would be uneasy,* too"
                },
                {
                    "Quota",
                    "شخص و غیره",
                    "The company revealed* a quota of jobs reserved for college students",
                    "There was a quota placed on the number of people who could migrate * here from China",
                    "Lieutenant Dugan doubted* that a quota had been placed on the  number of parking tickets each police officer was supposed to give out"
                },
                {
                    "Threat",
                    "تهدید",
                    "There is always the horrid* threat that my job will be abolished",
                    "It is absurd* to think that a tiny bug could be a threat to a person",
                    "Our English teacher made a threat to take away our cell phones"
                },
                {
                    "Ban",
                    "ممنوع کردن",
                    "The group unanimously* voted to ban all people who were under six feet",
                    "Health officials are trying to expand* their field in order to ban cigarette advertising from newspapers and magazines",
                    "I want to ban all outsiders from our discussion on security"
                },
                {
                    "Panic",
                    "ترس بی دلیل",
                    "The leader of the lost group appealed* to them not to panic",
                    "When the danger was exaggerated,* a few people started to panic",
                    "The source* of panic in the crowd was a man with a gun"
                },
                {
                    "Appropriate",
                    "مناسب",
                    "At an appropriate time, the chief promised to re'(eal* his plan",
                    "The lawn was an appropriate setting for Eileen's wedding",
                    "After some appropriate prayers, the dinner was served"
                }
            },
            {                             //------------------------فصل بیستم------------------------
                {
                    "Emerge",
                    "بیرون آمدن",
                    "When the fight was over, the underdog* emerged the winner",
                    "You have to be nimble* to emerge from the narrow opening in five seconds",
                    "What emerged from the bottle was a blend* of fruit juices"
                },
                {
                    "Jagged",
                    "دارای نوک تیز که بیرون زده اند",
                    "Being reckless,* Rudy didn't watch out forth~ jagged steel",
                    "It's an enormous* job to smooth the jagged edge of a fence",
                    "Leslie's hair was so jagged it was scarcely* possible to tell that it had just been cut"
                },
                {
                    "Linger",
                    "ماندن",
                    "The odor didn't vanish,* but lingered on for weeks",
                    "Some traditions* linger on long after they have lost their meanings",
                    " After the campus* closed for the summer, some students lingered on, reluctant* to go home"
                },
                {
                    "Ambush",
                    "کمین کردن",
                    "The ambush became a tragedy* for those who attempted it because they were all killed",
                    "General Taylor raved* about the ingenious* ambush he planned",
                    "The troops lay in ambush in the dense* woods all through the night"
                },
                {
                    "Crafty",
                    "حقه باز",
                    "His crafty mind prepared a comprehensive* plan to defraud* his partners",
                    "Leo didn't use brutal* strength against his opponents,* but he used his crafty bag of tricks to beat them",
                    "The Indians did not fall for the crafty ambush"
                },
                {
                    "Defiant",
                    "مبارزه طلب",
                    "I refuse to be manipulated, * the defiant young woman told her father",
                    "Professor Carlyle was defiant of any attempt to disprove his theory",
                    "Defiant of everyone, the addict* refused to be helped"
                },
                {
                    "Vigor",
                    "نیرو یا قدرت فعال",
                    "Having a great deal of vigor, jason was able to excel* in all sports",
                    "Tom Thumb made up for size by having more vigor than most people",
                    "Putting all her vigor into the argument, Patsy persuaded* me to let her drive"
                },
                {
                    "Perish",
                    "نابود شدن",
                    "Unless the plant gets water for its roots to absorb,* it will perish",
                    "Custer and all his men perished at the Little Big Horn",
                    "We are trying to make sure that democracy will never perish from this earth"
                },
                {
                    "Fragile",
                    "ظریف",
                    "The expensive* glassware is very fragile",
                    "Things made out of plywood have a tendency* to be fragile",
                    "On the box was a label that read, Fragile!Handle with care!"
                },
                {
                    "Captive",
                    "اسیر",
                    "The major was grateful* to be released after having been held captive for two years",
                    "Until the sheriff got them out, the two boys were held captive in the barn",
                    "Placido can hold an audience captive with his marvelous singing voice"
                },
                {
                    "Prosper",
                    "موفق بودن",
                    "Howard Hughes owned numerous* businesses and most of them prospered",
                    "No one should prosper from the misfortunes* of his or her friends",
                    "The annual* report showed that the new business was prospering"
                },
                {
                    "Devour",
                    "کاملا جذب کردن",
                    "It was a horrid* sight to see the lion devour the lamb",
                    "The animal doctor was pleased to see the terrier devour the dog food",
                    "c. My aunt devours four or five mystery books each week"
                }
            },
            {                             //------------------------فصل بیست و یکم------------------------
                {
                    "Plea",
                    "درخواست",
                    "The employees* turned in a plea to their boss for higher pay",
                    "The president's plea to release the captives* was denied by the enemy",
                    "In court today, the judge consented* to the lawyer's plea for a light sentence"
                },
                {
                    "Weary",
                    "خسته",
                    "I am weary of debating* the same topic* all day",
                    "The farmer grew weary of bringing in the harvest* every year for the past forty summers",
                    "Let me rest my weary bones here before the march commences"
                },
                {
                    "Collide",
                    "با نیرو بهم خوردن",
                    "When the two autos collided, the people in the fragile* smaller car perished",
                    "Committees are exploring* ways of keeping cars from collideing",
                    " In my estimate* the two bicycles collided at five o'clock"
                },
                {
                    "Confirm",
                    "اطمینان دادن",
                    "The way Victor talked back to his mother confirmed that he was defiant",
                    "A probe* of the criminal's background confirmed that he had been in jail numerous * times",
                    " Years of research confirmed the theory* that smoking is harmful"
                },
                {
                    "Verify",
                    "تایید کردن",
                    "A yes man is an employee* who will verify everything the boss says",
                    "I was there as a witness to verify the charges against the bus driver",
                    "The data* I turned in were verified by the clerks in our office"
                },
                {
                    "Anticipate",
                    "انتظار داشتن",
                    "We anticipate a panic* if the news is revealed* to the public",
                    "Harriet anticipated the approach* of the mailman with fright",
                    " With his weird* powers, Lonnie was able to anticipate the ringing of the telephone"
                },
                {
                    "Dilemma",
                    "یک انتخاب دشوار",
                    "It is sensible not to panic* in the face of a dilemma",
                    "Lottie faced the dilemma of whether to approve of the operation or not",
                    "In The Lady or the Tiger,the hero had the dilemma of which door to open"
                },
                {
                    "Detour",
                    "یک مسیر انحرافی",
                    "Pop was uneasy* about taking the detour in this strange town",
                    "In order to evade* city traffic, Anthony took a detour",
                    "The detour took us ten miles off our course"
                },
                {
                    "Merit",
                    "ارزش",
                    "There is little merit in lying to those you love",
                    "My brother was promoted because of merit, not because of friendship",
                    "I can't see any merit in your proposal"
                },
                {
                    "Transmit",
                    "فرستادن",
                    "Garcia's message was transmitted to the appropriate* people",
                    "Scientists can now transmit messages from space vessels* to earth",
                    "Our local radio station does not transmit broadcasts after midnight"
                },
                {
                    "Relieve",
                    "آزاد کردن",
                    "The pills relieved the pain from the wound I received in the conflict",
                    "A majority* of the population* wanted to relieve the mayor of his duty",
                    "The peace agreement relieved us of the threat* of an attack"
                },
                {
                    "Baffle",
                    "مبهوت کردن",
                    "How so mediocre* a player earned so much money baffled me",
                    "The topic* of relativity is a baffling one",
                    "Sherlock Holmes would undoubtedly* have been baffled by the way the crime was committed"
                }
            },
            {                             //------------------------فصل بیست و دوم------------------------
                {
                    "Warden",
                    "نگهبان",
                    "The warden found himself facing two hundred defiant* prisoners",
                    "A cautious* warden always has to anticipate* the possibility of an escape",
                    "When the journalists* asked to meet with Warden Thomas, he sent word that he was sick"
                },
                {
                    "Acknowledge",
                    "اعتراف کردن",
                    "The experts reluctantly* acknowledged that their estimate* of food costs was not accurate",
                    "District Attorney Hogan got the man to acknowledge that he had lied in cour",
                    "I hate living alone, the bachelor * acknowledged"
                },
                {
                    "Justice",
                    "عدالت",
                    "Daniel Webster abandoned* any hope for justice once he saw the jury",
                    "Our pledge* to the flag refers to liberty and justice for all",
                    "The warden* acknowledged* that justice had not been served in my case"
                },
                {
                    "Delinquent",
                    "جنایتکار",
                    "The youthful delinquent tried to avoid* going to jail",
                    "All delinquents are banned* from the Student Council at school",
                    "If you are delinquent in paying your dues, you will be dropped from membership in the club"
                },
                {
                    "Reject",
                    "رد کردن",
                    "When Sylvester tried to join the army, he was hoping the doctors would not reject him because of his eyesight",
                    "The reform* bill was unanimously* rejected by Congress",
                    "When his promotion was rejected by the newspaper owner, the editor * was thoroughly * bewildered"
                },
                {
                    "Deprive",
                    "محروم کردن",
                    "The poor man was deprived of a variety* of things that money could buy",
                    "We were deprived of a good harvest* because of the lack* of rain",
                    " Living in a rural* area, Betsy was deprived of concerts and plays"
                },
                {
                    "Spouse",
                    "همسر",
                    "When a husband prospers* in his business, his spouse benefits also",
                    "The woman and her spouse relieved* each other throughout the night at their child's bedside",
                    "May I bring my spouse to the office party? Dorinda asked"
                },
                {
                    "Vocation",
                    "کسب",
                    "Red Smith's vocation was as a journalist* for the Times",
                    "Hiroko's vocation turned into his life's career",
                    "It is difficult to pick an appropriate* vocation when you are in elementary school"
                },
                {
                    "Unstable",
                    "تثبیت نشده است",
                    "Some unstable people may panic* when they find themselves in trouble",
                    "I could detect* that the drinking glass was unstable and about to fall",
                    "Cathy's balance became unstable because she was very weary"
                },
                {
                    "Homicide",
                    "قتل",
                    "The police were baffled* as to who was responsible for the homicide",
                    "It took a crafty* person to get away with that homicide",
                    "News of the homicide quickly circulated* through our vicinity"
                },
                {
                    "Penalize",
                    "مجازات کردن",
                    "The Detroit Lions were penalized fifteen yards for their rough play",
                    "We were penalized for not following tradition",
                    "Mrs. Robins penalized us for doing the math problem in ink"
                },
                {
                    "Beneficiary",
                    "ذینفع",
                    "I was the beneficiary of $8,000 when my grandfather died",
                    "When the paintings were sold, the millionaire's niece was the beneficiary",
                    "My brother was the beneficiary of excellent advice from his guidance counselor"
                }
            },
            {                             //------------------------فصل بیست و سوم------------------------
                {
                    "Reptile",
                    "خزنده",
                    "a. The lizard is a reptile with a very slender* body",
                    "reptiles are kept in the museum's large hall",
                    "A crocodile is a reptile that is more nimble * in the water than out of it"
                },
                {
                    "Rarely",
                    "به ندرت",
                    "You rarely hear adults raving* about a movie they just saw",
                    "People are rarely frank* with each other",
                    "I rarely attend the annual* meetings of our family circle"
                },
                {
                    "Forbid",
                    "دستور دادن",
                    "Spitting on the floor is forbidden in public places",
                    "The law forbids drunken drivers to handle their autos",
                    "I forbid you to enter the dense* jungle because of the peril* that awaits you there"
                },
                {
                    "Logical",
                    "منطقی",
                    "It is logical to spend a minimum* on needless things",
                    "In order to keep your car running well, it is only logical that you lubricate * it regularly",
                    "I used a logical argument to persuade* Lester to leave"
                },
                {
                    "Exhibit",
                    "نشان دادن",
                    "A million-dollar microscope* is now on exhibit at our school",
                    "The bride and groom exhibited their many expensive* gifts",
                    "Kim frequently* exhibited her vast knowledge* of baseball before complete strangers"
                },
                {
                    "Proceed",
                    "پیش رفتن",
                    "Only those with special cards can proceed into the pool area",
                    "When the actor was late, the show proceeded without him",
                    "The senator proceeded to denounce* those wholesalers* who would deprive * Americans of their quota * of beef"
                },
                {
                    "Precaution",
                    "دور اندیشی",
                    "Detectives used precaution before entering the bomb's vicinity",
                    "We must take every precaution not to pollute* the air",
                    "Before igniting* the fire, the hunters took unusual precaution"
                },
                {
                    "Extract",
                    "بیرون کشیدن",
                    "Dr. Fogel extracted my tooth in an amateur* fashion",
                    "Chemists extracted the essential* vitamins from the grain",
                    "Spencer was ingenious* in extracting information from witnesses"
                },
                {
                    "Prior",
                    "قبلی",
                    "prior to choosing his life's vocation,* Paul traveled to India",
                    "Myrna was unhappy prior to meeting her beau",
                    "President Obama had prior service as a senator"
                },
                {
                    "Embrace",
                    "بغل کردن",
                    "After having been rivals* for years, the two men embraced",
                    "When Ellen's spouse* approached,* she slipped out of Doug's embrace",
                    "The young girl was bewildered* when the stranger embraced her"
                },
                {
                    "Valiant",
                    "شجاع",
                    "Robin Hood was valiant and faced his opponents* without fear",
                    "The valiant paratroopers led the invasion",
                    "Grandma joad had the ability* to be valiant when the need arose"
                },
                {
                    "Partial",
                    "ناقص",
                    "We made a partial listing of the urgently* needed supplies",
                    "Macy's had a sale on a partial selection of its winter clothes",
                    "Using only a partial amount of his great speed, jim surpassed* all the other runners"
                }
            },
            {                             //------------------------فصل بیست و چهارم------------------------
                {
                    "Fierce",
                    "خشن",
                    "Barry was so fiercely angry that he thrust* his hand through the glass",
                    "One must take appropriate* precautions* when approaching* fierce dogs",
                    "He took one look at his fierce opponent* and ran"
                },
                {
                    "Detest",
                    "متتفر بودن از",
                    "The world detests people who aren't valiant",
                    "Wally was certain that his girlfriend's parents would detest him because he had been a delinquent",
                    "I detest Chinese food but I won't deprive* you of the chance to eat it"
                },
                {
                    "Sneer",
                    "نگاه یا حرف تمسخر آمیز",
                    "The journalists* were cautious* about sneering at the Secretary of Defense",
                    "Wipe that sneer off your face! the dean told the delinquent",
                    "When offered a dime as a tip, the taxi driver sneered at his rider"
                },
                {
                    "Scowl",
                    "اخم کردن",
                    "Laverne scowled at her mother when she was prohibited* from going out",
                    "I dread* seeing my father scowl when he gets my report card",
                    " Because of a defect* in her vision,* it always appeared that Polly was scowling"
                },
                {
                    "Encourage",
                    "اعتماد را افزایش دادن",
                    "We encouraged the coach to devise* a plan for beating jefferson High",
                    "Some unstable* persons need to be encouraged to find a vocation",
                    "A valiant* person rarely* needs to be encouraged"
                },
                {
                    "Consider",
                    "اندیشیدن",
                    "jon considered whether a comprehensive* report was necessary",
                    "Do you consider that dress to be a bargain at the wholesale* price ?",
                    "The wrestler was always considered to be the underdog* in every match"
                },
                {
                    "Vermin",
                    "حیوانات موذی",
                    "We should try to eliminate* all vermin from our house",
                    "Some reptiles* eat vermin as their food",
                    " Although vermin are not always visible,* they probably inhabit* every house in the city"
                },
                {
                    "Wail",
                    "به خاطر اندوه یا درد بلند و کشیده فریاد زدن",
                    "When tragedy* struck, the old people began to wail",
                    "In some countries the women are expected to wail loudly after their husbands die",
                    "When the Yankees lost the World Series, there was much wailing in New York"
                },
                {
                    "Symbol",
                    "چیزی که نشانه یا نماینده ی چیز دیگری است",
                    "The statue outside the court building is considered* a symbol of justice",
                    "Symbols for God are prohibited* in their religion",
                    "An olive branch is a symbol of peace"
                },
                {
                    "Authority",
                    "اقتدار",
                    "No one should have the authority to dictate our career choice",
                    "Today a monarch* does not have the authority he once enjoyed",
                    "The Supreme Court is entrusted with the authority to interpret our Constitution"
                },
                {
                    "Neutral",
                    "بی طرف",
                    "It is logical* to remain neutral in a violent* argument between spouses",
                    "Switzerland was a neutral country in World War II",
                    "Adolph did not reject* the idea but remained neutral about it"
                },
                {
                    "Trifle",
                    "مقدار کم",
                    "I ate a trifle for dinner rather than a vast* meal",
                    "Walter spends only a trifle of his time in studying French",
                    "At our meetings Alex always raises trifleing objections to any new plan"
                }
            },
            {                             //------------------------فصل بیست و پنجم------------------------
                {
                    "Architect",
                    "خالق",
                    "The famous architect, Frank Lloyd Wright, designed his buildings to blend * with their surroundings",
                    "An architect must have a knowledge of the materials that will be used in his structures",
                    "General Eisenhower was the architect of victory over the Nazis in World War II"
                },
                {
                    "Matrimony",
                    "زندگی زناشویی",
                    "Though matrimony is a holy state, our local governments still collect a fee for the marriage license",
                    "Because of lack of money, the sweetness of their matrimony turned sour",
                    "Some bachelors* find it very difficult to give up their freedom for the blessings of matrimony"
                },
                {
                    "Baggage",
                    "تجهیزات یک ارتش",
                    "When Walt unpacked his baggage, he found he had forgotten his radio",
                    "Mrs. Montez checked her baggage at the station and took the children for a walk",
                    "The modern army cannot afford to be slowed up with heavy baggage"
                },
                {
                    "Squander",
                    "تلف کردن",
                    "Do not squander your money by buying what you cannot use",
                    "Because Freddy squandered his time watching television, he could not catch up on his homework",
                    "In his will, Mr. Larson warned his children not to squander their inheritance"
                },
                {
                    "Abroad",
                    "خارج از وطن",
                    "More people are going abroad for vacations",
                    "Is there any truth to the rumor abroad that school will be open all summer ?",
                    "The news of the president's illness spread abroad"
                },
                {
                    "Fugitive",
                    "متواری",
                    "Paul was a fugitive from the slums, abandoned* by all his friends",
                    "After escaping from prison, Tom led an unhappy life as a fugitive from the law",
                    "The fugitives from the unsuccessful revolution were captured"
                },
                {
                    "Calamity",
                    "مشکل جدی",
                    "Failure in one test should not be regarded as a calamity",
                    "The death of her husband was a calamity that left Mrs. Marlowe numb",
                    "What is more dismal* than one calamity following upon the heels of another ?"
                },
                {
                    "auper",
                    "شخصی بسیار فقیر",
                    "The fire that destroyed his factory made Mr. Bloomson a pauper",
                    "The richest man is a pauper if he has no friends",
                    "Since he was once a pauper himself, Max is willing to help the needy whenever he can"
                },
                {
                    "Envy",
                    "حسادت",
                    "Marilyn's selection as Prom Queen made her the envy of every senior",
                    "My parents taught me not to envy anyone else's wealth",
                    "Our envy of Nora's skating ability is foolish because with practice all of us could do as well"
                },
                {
                    "Collapse",
                    "خراب شدن",
                    "A heavy flood caused the bridge to collapse",
                    "His failure in chemistry meant the collapse of Bob's summer plans",
                    "Collapse the trays and store them in the closet"
                },
                {
                    "Prosecute",
                    "ادامه دادن",
                    "Drunken drivers should be prosecuted",
                    "The district attorney refused to prosecute the case for lack of evidence",
                    "The general prosecuted the war with vigor"
                },
                {
                    "Bigamy",
                    "تعداد زوجات",
                    "Some people look upon bigamy as double trouble",
                    "Mr. Winkle, looking at his wife, thought bigam}' was one crime he would never be guilty of",
                    "Some religious groups are in favor of bigamy even though it is against the law of the land"
                }
            },
            {                             //------------------------فصل بیست و ششم------------------------
                {
                    "Possible",
                    "ممکن",
                    "Call me tomorrow evening if possible",
                    "It is now possible for man to walk on the moon",
                    "Considering* Melissa's weakness in writing, it is not possible for her to help you with your composition"
                },
                {
                    "Compel",
                    "مجبور کردن",
                    "It is not possible* to compel a person to love his fellow man",
                    "Heavy floods compelled us to stop",
                    "Mr. Gorlin is a teacher who does not have to compel me to behave"
                },
                {
                    "Awkward",
                    "شرم آور",
                    "Sally is very awkward in speaking to the class but quite relaxed with her own group of friends",
                    "The handle of this bulky* suitcase has an awkward shape",
                    "Slow down because this is an awkward corner to turn"
                },
                {
                    "Venture",
                    "جرات کردن",
                    "Ulysses was a man who would not reject* any venture, no matter how dangerous",
                    "John Jacob Astor made his fortune by a lucky venture in animal furs",
                    "Medics venture their lives to save wounded soldiers"
                },
                {
                    "Awesome",
                    "با شکوه",
                    "The towering mountains, covered with snow, are an awesome sight",
                    "Connie had such an awesome amount of work to complete before graduation she doubted * she would have everything ready in time",
                    "The atom bomb is an awesome achievement for mankind"
                },
                {
                    "Guide",
                    "اداره کردن",
                    "Tourists often hire guides.",
                    "The Indian guided the hunters through the forest",
                    "Use the suggestions in the handbook as a study guide"
                },
                {
                    "Quench",
                    "خفه کردن",
                    "Foam will quench an oil fire",
                    "Only iced tea will quench my thirst on such a hot day",
                    "He reads and reads and reads to quench his thirst for knowledge"
                },
                {
                    "Betray",
                    "نشان دادن",
                    "Nick's awkward* motions betrayed his nervousness",
                    "Without realizing what he was doing, the talkative soldier betrayed his unit's plans",
                    "The child's eyes betrayed his fear of the fierce* dog"
                },
                {
                    "Utter",
                    "بیان کردن",
                    "When Violet accidentally stepped on the nail, she uttered a sharp cry of pain",
                    "Seth was surprised when he was told that he had uttered Joan's name in his sleep",
                    "When Mr. Fuller saw that his house had not been damaged in the fire, he uttered a sigh of relief"
                },
                {
                    "Pacify",
                    "ساکت کردن",
                    "This toy should pacify that screaming baby",
                    "We tried to pacify the woman who was angry at having to wait so long in line",
                    "Soldiers were sent to pacify the countryside"
                },
                {
                    "Respond",
                    "پاسخ دادن",
                    "Greg responded quickly to the question",
                    "My dog responds to every command I give him",
                    "Mrs. Cole responded to the medicine so well that she was better in two days"
                },
                {
                    "Beckon",
                    "جذب کردن",
                    "Jack beckoned to me to follow him",
                    "The delicious smell of fresh bread beckoned the hungry boy",
                    "The sea beckons us to adventure"
                }
            },
            {                             //------------------------فصل بیست و هفتم------------------------
                {
                    "Despite",
                    "علی رغم",
                    "The player continued in the game despite his injuries",
                    "Despite being shy, Ted signed up to audition on American Idol",
                    "We won the game by a shutout despite the fact that our team got only three hits"
                },
                {
                    "Disrupt",
                    "ناراحت",
                    "Pam's clowning disrupted the class every day",
                    "The storm disrupted the telephone lines throughout the area",
                    "The collapse* of the government disrupted the services we took for granted, such as mail delivery"
                },
                {
                    "Rash",
                    "کهیر",
                    "The report of a rash of burglaries in the neighborhood was exaggerated",
                    "Poison ivy causes a rash",
                    "It is rash to threaten an action you cannot carry out"
                },
                {
                    "Rapid",
                    "سریع",
                    "We took a rapid walk around the camp before breakfast",
                    "If you work rapidly you can complete the test in twenty minutes",
                    "The response* to the surprise attack was a rapid retreat"
                },
                {
                    "Exhaust",
                    "کاملا خالی کردن",
                    "To exhaust the city's water supply would be a calamity",
                    "The long climb to the top of the mountain exhausted our strength",
                    "If we continue to squander* our money recklessly,* our treasury will soon be exhausted"
                },
                {
                    "Severity",
                    "سختگیری",
                    "The severity of the teacher was not appreciated by the pupils until they reached the final examinations",
                    "The severity of the Black Plague can be imagined from the fact that thirty percent of the population* died",
                    "Rosita complained to the principal about the severity of the punishment that the Student Court gave to her"
                },
                {
                    "Feeble",
                    "ضعیف",
                    "We heard a feeble cry from the exhausted* child",
                    "The guide* made a feeble attempt to explain why he had taken the wrong turn",
                    "The feeble old man collapsed* on the sidewalk"
                },
                {
                    "Unite",
                    "به هم پیوستن",
                    "The thirteen colonies united to form one country",
                    "Matrimony* united two famous Virginia families",
                    "America and Russia were united against a common enemy in World War II"
                },
                {
                    "Cease",
                    "متوقف کردن",
                    "Cease trying to do more than you can",
                    "The whispering in the audience ceased when the curtain went up",
                    "When you cease making war, you can then begin to pacify* the small villages the enemy controls"
                },
                {
                    "Thrifty",
                    "صرفه جویی",
                    "By being thrifty, Miss Benson managed to get along on her small income",
                    "A thrifty person knows that squandering* money can lead to financial* calamity",
                    "By thrifty use of their supplies, the shipwrecked sailors were able to survive* for weeks"
                },
                {
                    "Miserly",
                    "خسیس",
                    "Being miserly with our natural resources will help us to live longer on this earth",
                    "A miserly person rarely* has any friends",
                    "Silas Marner abandoned* his miserly habits when Eppie came into his life"
                },
                {
                    "Monarch",
                    "قانون گذار",
                    "There are few modern nations that are governed by monarchs",
                    "The monarchs of ancient Rome considered themselves descendants* of the gods",
                    "Men sometimes believe that they are monarchs in their own homes"
                }
            },
            {                             //------------------------فصل بیست و هشتم------------------------
                {
                    "Outlaw",
                    "قانون شکن",
                    "Congress has outlawed the sale of certain drugs",
                    "The best-known outlaw of the American West was Jesse James",
                    "An animal that is cast out by the rest of the pack is known as an outlaw"
                },
                {
                    "Promote",
                    "ترویج",
                    "Students who pass the test will be promoted to the next grade",
                    "An accurate* knowledge of other cultures will promote good will among people of different backgrounds",
                    "Several bankers invested an enormous* sum of money to promote the idea"
                },
                {
                    "Undernourished",
                    "سوءتغذیه",
                    "The undernourished child was so feeble* he could hardly walk",
                    "There is evidence* that even wealthy people are undernourished because they do not eat sufficient quantities* of healthful foods",
                    "An infant who drinks enough milk will not be undernourished"
                },
                {
                    "Illustrate",
                    "نشان دادن",
                    "To illustrate how the heart sends blood around the body, the teacher described how a pump works",
                    "This exhibit* will illustrate the many uses of atomic energy",
                    "These stories illustrate Mark Twain's serious side"
                },
                {
                    "Disclose",
                    "فاش کردن",
                    "The lifting of the curtain disclosed a beautiful winter scene",
                    "This letter discloses the source* of his fortune",
                    "Samson, reclining* in the arms of Delilah, disclosed that the secret of his strength was in his long hair"
                },
                {
                    "Excessive",
                    "بیش از اندازه",
                    "Pollution* of the atmosphere is an excessive price to pay for so-called progress",
                    "Numerous* attempts have been made to outlaw* jet planes that make excessive noise",
                    "The inhabitants* of Arizona are unaccustomed* to excessive rarn"
                },
                {
                    "Disaster",
                    "فاجعه",
                    "The hurricane's violent* winds brought disaster to the coastal town",
                    "The San Francisco earthquake and the Chicago fire are two of the greatest disasters in American history",
                    "The coach considered* the captain's injury a disaster for the team"
                },
                {
                    "Censor",
                    "سانسور کردن",
                    "Some governments, national and local, censor books",
                    "The censor felt that fiction* as well as other books should receive the stamp of approval before they were put on sale",
                    "Any mention of the former prime minister was outlawed* by the censor"
                },
                {
                    "Culprit",
                    "مقصر",
                    "Who is the culprit who has eaten all the strawberries",
                    "The police caught the culprit with the stolen articles in his car",
                    "In the Sherlock Holmes story, the culprit turned out to be a snake"
                },
                {
                    "Juvenile",
                    "نوجوان",
                    "My sister is known in the family as a juvenile delinquent",
                    "Paula is still young enough to wear juvenile fashions",
                    "Ellen used to devour* Cinderella and other stories for juveniles"
                },
                {
                    "Bait",
                    "طعمه",
                    "The secret of successful trout fishing is finding the right bait",
                    "How can you expect to bait Mike into running for the class presidency when he has already refused every appeal",
                    "Eddie is a good hunter because he knows the merit* of each kind of bait for the different animals"
                },
                {
                    "Insist",
                    "اصرار",
                    "Mother insists that we do our homework before we start sending e-mails",
                    "She insisted that Sal was not jealous* of his twin brother",
                    "The doctor insisted that Marian get plenty of rest after the operation"
                }
            },
            {                             //------------------------فصل بیست و نهم------------------------
                {
                    "Toil",
                    "زحمت کشیدن",
                    "The feeble* old man toiled up the hill",
                    "After years of toil, scientists disclosed* that they had made progress in controlling the dreaded* disease",
                    "Despite* all his toil, Fred never succeeded in reaching his goal"
                },
                {
                    "Blunder",
                    "اشتباه بزرگ",
                    "The exhausted* boy blundered through the woods",
                    "Bert's awkward* apology* could not make up for his serious blunder",
                    "The general's blunder forced his army to a rapid* retreat"
                },
                {
                    "Daze",
                    "گیج کردن",
                    "The severity* of the blow dazed the fighter and led to his defeat",
                    "When he ventured* out of the house at night, the child was dazed by the noise and the lights",
                    "Dazed by the flashlight, Maria blundered* down the steps"
                },
                {
                    "Mourn",
                    "سوگواری",
                    "Sandra did not cease* to mourn for john Lennon",
                    "The entire city mourned for the people lost in the calamity",
                    "We need not mourn over trifles"
                },
                {
                    "Subside",
                    "به سطح پایین تری فرو رود",
                    "After the excessive* rains stopped, the flood waters subsided",
                    "The waves subsided when the winds ceased* to blow",
                    "Danny's anger subsided when the culprit* apologized"
                },
                {
                    "Maim",
                    "فلج کردن",
                    "Auto accidents maim many persons each year",
                    "Though he went through an awesome* experience in the crash, Fred was not seriously maimed",
                    "Car manufacturers insist* that seat belts can prevent the maiming of passengers in the event of a crash"
                },
                {
                    "Comprehend",
                    "درک  کردن",
                    "If you can use a word correctly, there is a good chance that you comprehend it",
                    "You need not be a pauper* to comprehend fully what hunger is",
                    "My parents say that they cannot comprehend today's music"
                },
                {
                    "Commend",
                    "ستایش کردن",
                    "Everyone commended the mayor's thrifty* suggestion",
                    "Florence commended the baby to her aunt's care",
                    "The truth is that we all like to be commended for good work"
                },
                {
                    "Final",
                    "نهایی",
                    "The final week of the term is rapidly* approaching",
                    "Jose was commended* for his improvement in the final test",
                    "The final censor* of our actions is our own conscience"
                },
                {
                    "Exempt",
                    "معاف",
                    "Our school exempts bright pupils from final* exams",
                    "School property is exempt from most taxes",
                    "Juvenile* offenders are not exempt from punishment"
                },
                {
                    "Vain",
                    "بیهوده",
                    "Josephine is quite vain about her beauty",
                    "To be perfectly frank, I do not see what she has to be vain about",
                    "Brian made numerous* vain attempts to reach the doctor by telephone"
                },
                {
                    "Repetition",
                    "تکرار",
                    "The repetition of new words in this book will help you to learn them",
                    "Any repetition of such unruly* behavior will be punished",
                    "After a repetition of his costly mistake, Jerry was fired from his job"
                }
            },
            {                             //------------------------فصل سی ام------------------------
                {
                    "Depict",
                    "توصیف",
                    "The artist and the author both tried to depict the sunset's beauty",
                    "Mr. Salinger depicted the juvenile* character with great accuracy",
                    "AI Pacino said he would depict a different kind of Shylock"
                },
                {
                    "Mortal",
                    "مرگبار",
                    "We must live with the knowledge that all living creatures are mortal",
                    "His rash* venture* brought him to a mortal illness",
                    "The two monarchs* were mortal enemies"
                },
                {
                    "Novel",
                    "رمان",
                    "The architect* created a novel design that pleased everyone",
                    "The novel plan caused some unforeseen* problems",
                    "Robert was commended* by his teacher for the excellent report on the American novel, The Grapes ofWrath"
                },
                {
                    "Occupant",
                    "ساکن",
                    "A feeble* old woman was the only occupant of the shack",
                    "The will disclosed* that the occupant of the estate was penniless",
                    "The occupant of the car beckoned* us to follow him"
                },
                {
                    "Appoint",
                    "تعیین",
                    "The library was appointed as the best place for the urgent* meeting",
                    "Though Mr. Thompson was appointed to a high position, he did not neglect* his old friends",
                    "The occupant* of the well-appointed guest room considered* himself quite fortunate"
                },
                {
                    "Quarter",
                    "ربع",
                    "The large family was unaccustomed* to such small quarters",
                    "Ellen moved to the French Quarter of our city",
                    "The city quartered the paupers* in an old school"
                },
                {
                    "Site",
                    "سایت",
                    "The agent insisted* that the house had one of the best sites in town",
                    "We were informed by our guide* that a monument would be built on the site of the historic battle",
                    "For the site of the new school, the committee preferred an urban* location"
                },
                {
                    "Quote",
                    "نقل قول",
                    "She often quotes her spouse* to prove a point",
                    "The stockbroker quoted gold at a dollar off yesterday's closing price",
                    "Biblical quotes offer a unique* opportunity for study"
                },
                {
                    "Verse",
                    "ایه",
                    "The verse from the Bible that my father quoted* most frequently* was, Love thy neighbor as thyself",
                    "Several verses of a religious nature were contained in the document",
                    "Though it is not always easy to comprehend,* Shakespeare's verse has merit* that is worth the toil"
                },
                {
                    "Morality",
                    "اخلاق",
                    "The editor* spoke on the morality of bugging the quarters* of a political opponent",
                    "We rarely consider* the morality of our daily actions, though that should occupy* a high position in our thinking",
                    "Kenny's unruly* behavior has nothing to do with his lack* of morality"
                },
                {
                    "Roam",
                    "پرسه زدن",
                    "In the days of the Wild West, outlaws* roamed the country",
                    "A variety* of animals once roamed our land",
                    "The bachelor* promised his girlfriend that he would roam no more"
                },
                {
                    "Attract",
                    "جذب کننده",
                    "The magnet attracted the iron particles",
                    "Adventure was the thrill that attracted the famous mountain climber to the jagged* peak",
                    "A glimpse* into the brightly colored room attracted the children's attention"
                }
            },
            {                             //------------------------فصل سی و یکم------------------------
                {
                    "Commuter",
                    "مسافر",
                    "The average commuter would welcome a chance to live in the vicinity* of his or her work",
                    "Have your commuter's ticket verified* by the conductor",
                    "A novel* educational program gives college credit to commuters who listen to a lecture while they are traveling to work"
                },
                {
                    "Confine",
                    "محدود کردن",
                    "The fugitive* was caught and confined to jail for another two years",
                    "A virus that was circulating* in the area confined AI to his house",
                    "Polio confined President Roosevelt to a wheelchair"
                },
                {
                    "Idle",
                    "بیکار",
                    "Any attempt to study was abandoned* by the student, who idled away the morning",
                    "The idle hours of a holiday frequently* provide the best time to take stock",
                    "Do not deceive* yourself into thinking that these are just idle rumors"
                },
                {
                    "Idol",
                    "بت",
                    "This small metal idol illustrates* the art of ancient Rome",
                    "John Wayne was the idol of many young people who liked cowboy mov1es",
                    "Scientists are still trying to identify* this idol found in the ruins"
                },
                {
                    "Jest",
                    "به شوخی",
                    "Though he spoke in jest, Mark was undoubtedly* giving us a message",
                    "Do not jest about matters of morality",
                    "In some quarters,* honesty and hard work have become subjects of jest"
                },
                {
                    "Patriotic",
                    "میهن پرست",
                    "It is patriotic to accept your responsibilities to your country",
                    "The patriotic attitude of the captive* led him to refuse to cooperate with the enemy",
                    "Nathan Hale's patriotic statement has often been quoted:* I regret that I have but one life to give for my country"
                },
                {
                    "Dispute",
                    "اختلاف نظر",
                    "Our patriotic* soldiers disputed every inch of ground during the battle",
                    "The losing team disputed the contest up until the final* minute of play",
                    "Many occupants* of the building were attracted* by the noisy dispute"
                },
                {
                    "Valor",
                    "شجاعت",
                    "The valor of the Vietnam veterans deserves the highest commendation",
                    "No one will dispute* the valor ofWashington's men at Valley Forge",
                    "The fireman's valor in rushing into the flaming house saved the occupants* from a horrid* fate"
                },
                {
                    "Lunatic",
                    "دیوانه",
                    "Only a lunatic would willingly descend* into the monster's cave",
                    "Certain lunatic ideas persist* even though they have been rejected* by all logical* minds",
                    "My roommate has some lunatic ideas about changing the world"
                },
                {
                    "Vein",
                    "رگ",
                    "A vein of lunacy* seemed to run in the family",
                    "Mario's wrist was severely* cut by the rock, causing his vein to bleed heavily",
                    "Explorations disclosed* the rich vein of copper in the mountain"
                },
                {
                    "Uneventful",
                    "بی حادثه",
                    "After the variety* of bewildering* experiences at the start of our trip, we were happy that the rest of the journey was uneventful",
                    "Our annual* class outing proved quite uneventful",
                    "The meeting seemed uneventful but expert observers realized that important decisions were being made"
                },
                {
                    "Fertile",
                    "بارور",
                    "Chicks hatch from fertile eggs",
                    "The loss of their fertile lands threw the farmers into a panic",
                    "A fertile mind need never be uneasy* about finding life uneventful"
                }
            },
            {                             //------------------------فصل سی و دوم------------------------
                {
                    "Refer",
                    "تحویل",
                    "Let us refer the dispute* to the dean",
                    "Our teacher referred us to the dictionary for the meanings of the difficult words in the novel",
                    "The speaker referred to a verse in the Bible to support his theory"
                },
                {
                    "Distress",
                    "پریشانی",
                    "The family was in great distress over the accident that maimed* Kenny",
                    "My teacher was distressed by tbe dismal performance of our class on the final* examination",
                    "Long, unscheduled delays at the station cause distress to commuters"
                },
                {
                    "Diminish",
                    "کاهش",
                    "The excessive* heat diminished as the sun went down",
                    "Our diminishing supply of food was carefully wrapped and placed with the baggage",
                    "The latest news from the battlefront confirms* the report of diminishing military activity"
                },
                {
                    "Maximum",
                    "بیشنرین",
                    "Chris acknowledged* that the maximum he had ever walked in one day was fifteen miles",
                    "We would like to exhibit* this rare* collection to the maximum number of visitors",
                    "The committee anticipated* the maximum attendance ofthe first day of the performance"
                },
                {
                    "Flee",
                    "فرار کردن",
                    "The fleeing outlaws* were pursued* by the police",
                    "One could clearly see the clouds fleeing before the wind",
                    "The majority* of students understand that they cannot flee from their responsibilities"
                },
                {
                    "Vulnerable",
                    "اسیب پذیر",
                    "Achilles was vulnerable only in his heel",
                    "The investigator's nimble* mind quickly located the vulnerable spot in the defendant's alibi",
                    "A vulnerable target for thieves is a solitary* traveler"
                },
                {
                    "Signify",
                    "منظور داشتن",
                    "Oh! signifiyes surprise",
                    "A gift of such value signifyies more than a casual* relationship",
                    "The word fragile* stamped on a carton signifyies that it must be handled with caution"
                },
                {
                    "Mythology",
                    "اسطوره شناسی",
                    "The story of Proserpina and Ceres explaining the seasons is typical* of Greek mythology",
                    "From a study of mythology we can conclude* that the ancients were concerned with the wonders of nature",
                    "Ancient mythology survives* to this day in popular* expressions such as Herculean task or Apollo Project"
                },
                {
                    "Colleague",
                    "همکار",
                    "The captain gave credit for the victory to his valiant* colleagues",
                    "Who would have predicted* that our pedestrian* colleague would one day win the Nobel Prize for medicine",
                    "We must rescue our colleagues from their wretched* condition"
                },
                {
                    "Torment",
                    "عذاب",
                    "Persistent* headaches tormented him",
                    "The illustrations* in our history text show the torments suffered by the victims of the French Revolution",
                    "The logical* way to end the torment of doubt over the examination is to spend adequate* time in study"
                },
                {
                    "Provide",
                    "فراهم کردن",
                    "How can we provide job opportunities for all our graduates",
                    "Hal said he would bring the ball provided he would be allowed to pitch",
                    "The government is obligated, among other things, to provide for the common welfare and secure the blessings of peace for all citizens"
                },
                {
                    "Loyalty",
                    "وفاداری",
                    "The monarch* referred* to his knights' loyalty with pride",
                    "Nothing is so important to transmit* to the youth as the sacredness* ofloyalty to one's country",
                    "Out of a sense of loyalty to his friends, Michael was willing to suffer torments,* and he therefore refused to identify* his colleagues* in the plot"
                }
            },
            {                             //------------------------فصل سی و سوم------------------------
                {
                    "Volunteer",
                    "داوطلب",
                    "The draft has been abolished* and replaced by a volunteer army",
                    "Terry did not hesitate* to volunteer for the most difficult jobs",
                    "The boys were reluctant* to volunteer their services to help clean up after the dance"
                },
                {
                    "Prejudice",
                    "تعصب",
                    "Prejudice against minority* groups will linger* on as long as people ignore* the facts",
                    "Eliminating* prejudice should be among the first concerns of a democracy",
                    "The witness's weird* behavior prejudiced Nancy's case"
                },
                {
                    "Shrill",
                    "تیز",
                    "Despite* their small size, crickets make very shrill noises",
                    "The shrill whistle of the policeman was warning enough for the fugitive* to stop in his tracks",
                    "A shrill torrent* of insults poured from the mouth of the shrieking* woman"
                },
                {
                    "Jolly",
                    "با نشاط",
                    "The jolly old man, an admitted bigamist,* had forgotten to mention his first wife to his new spouse",
                    "When the jolly laughter subsided,* the pirates began the serious business of dividing the gold",
                    "Are you aware* that a red-suited gentleman with a jolly twinkle in his eyes is stuck in the chimney"
                },
                {
                    "Witty",
                    "شوخ",
                    "Mr. Carlson's witty introduction qualifies* him as a first-rate speaker",
                    "Fay is too slow to appreciate such witty remarks",
                    "The lawyer tried to prosecute* the case by being witty and thereby entertaining the jury"
                },
                {
                    "Hinder",
                    "مانع",
                    "Deep mud hindered travel in urban* centers",
                    "The storm hindered the pursuit* of the fleeing* prisoners",
                    "Mona's gloomy* nature hinders her relationships with other people"
                },
                {
                    "Lecture",
                    "سخنرانی",
                    "Rarely* have I heard a lecture with such clear illustrations",
                    "Henry's father lectured him on the awesome* perils* of drug addiction",
                    "A famous journalist* delivered a lecture on prejudice* in the press"
                },
                {
                    "Abuse",
                    "سوءاستفاده کردن",
                    "Those who abuse the privileges of the honor system will be penalized",
                    "The editor* apologized* for the abuse we had suffered as a result of his article",
                    "Brutal* abuse of children in the orphanage was disclosed* by the investigation"
                },
                {
                    "Mumble",
                    "زمزمه کردن",
                    "Ricky mumbled his awkward* apology",
                    "This speech course will encourage* you to stop mumbling and to speak more distinctly",
                    "When the witness continued to mumble, the judge asked him to speak up"
                },
                {
                    "Mute",
                    "بی صدا",
                    "The usually defiant* child stood mute before the principal",
                    "People are no longer willing to remain mute on the subject of abuse* of gun control",
                    "The horror of the famine* left the inhabitants* of the land mute with their tragic* memories"
                },
                {
                    "Wad",
                    "کم اهمیت",
                    "To decrease* the effects of the pressure, the diver put wads of cotton in his ears",
                    "The officer challenged* George to explain the wad of fifty dollars which he had in his pocket",
                    "Because the automatic firing mechanism was defective,* the hunter had to wad the powder into the gun by hand"
                },
                {
                    "Retain",
                    "حفظ",
                    "Despite* her lack* of funds Mrs. Reilly retained a detective* to follow her spouse",
                    "China dishes have the unique* quality* of retaining heat longer than metal pans",
                    "Like the majority* of people, I can retain the tune but not the words of a song"
                }
            },
            {                             //------------------------فصل سی و چهارم------------------------
                {
                    "Candidate",
                    "نامزد",
                    "We can have a maximum* of four candidates for the office of president",
                    "Each candidate for mayor seemed confident* he would be victorious",
                    "Derek Jeter is a candidate for baseball's Hall of Fame"
                },
                {
                    "Precede",
                    "مقدم بودن",
                    "Lyndon Johnson preceded Richard Nixon as president",
                    "In a gallant* gesture, Ronnie allowed Amanda's name to precede his in the program listing",
                    "A prominent* speaker preceded the ceremony of the granting of the diplomas"
                },
                {
                    "Adolescent",
                    "نوجوان",
                    "In his adolescent years, the candidate* claimed, he had undergone many hardships",
                    "There is a fiction* abroad* that every adolescent is opposed to tradition",
                    "Our annual rock festival attracts* thousands of adolescents"
                },
                {
                    "Coeducational",
                    "مختلط",
                    "There has been a massive* shift to coeducational schools",
                    "Coeducational institutions, once thought to have a disruptive* effect, have been found to be beneficial",
                    "In choosing a college, Ned leans toward schools that are coeducational"
                },
                {
                    "Radical",
                    "رفتن به ریشه",
                    "The tendency* to be vicious* and cruel is a radical fault",
                    "We observe that the interest in radical views is beginning to subside",
                    "Because Richard was a radical, the Conservative Party would not accept him as a candidate"
                },
                {
                    "Spontaneous",
                    "خود جوش",
                    "The vast* crowd burst into spontaneous cheering at the skillful play",
                    "Be cautious* with these oily rags because they can break out in spontaneous flame",
                    "William's spontaneous resentment* at the mention of his sister was noted by the observant* teacher"
                },
                {
                    "Skim",
                    "از بالا حذف کنید",
                    "This soup will be more nourishing* if you skim offthe fat",
                    "I caught a glimpse* of Mark and Marge skimming over the ice",
                    "Detective Corby, assigned to the homicide,* was skimming through the victim's book of addresses"
                },
                {
                    "Vaccinate",
                    "واکسن زدن",
                    "There has been a radical* decline in polio since doctors began to vaccinate children with the Salk vaccine",
                    "The general population* has accepted the need to vaccinate children against the once-dreaded* disease",
                    "Numerous* examples persist* of people who have neglected* to have their infants vaccinated"
                },
                {
                    "Untidy",
                    "نامرتب",
                    "The bachelor's* quarters* were most untidy",
                    "We must start a cleanup campaign to keep the campus* from being so untidy",
                    "Finding the house in such an untidy condition baffled* us"
                },
                {
                    "Utensil",
                    "وسایل اشپزی",
                    "Several utensils were untidily* tossed about the kitchen",
                    "Edward's baggage* contained all the utensils he would need on the camping trip",
                    "Some people are so old-fashioned that they reject* the use of any modern utensil"
                },
                {
                    "Sensitive",
                    "حساس",
                    "The eye is sensitive to light",
                    "From the experiment we may conclude~ that mercury in a thermometer is sensitive to changes in temperature",
                    "James is sensitive about his wretched* handwriting"
                },
                {
                    "Temperate",
                    "معتدل",
                    "The United States is mostly in the North Temperate Zone",
                    "All students received the appeal* to be temperate and not to jump to conclusions* in judging the new grading system",
                    "Mrs. Rollins commended* her class for their temperate attitude when she announced the extra assignment"
                }
            },
            {                             //------------------------فصل سی و پنجم------------------------
                {
                    "Vague",
                    "نامشخض",
                    "Joe's position was vague because he wanted to remain neutral* in the dispute",
                    "When asked her opinion, Gladys was tactful* enough to give a vague answer that did not hurt anyone",
                    "The vague shape in the distance proved to be nothing more weird* than a group of trees"
                },
                {
                    "Elevate",
                    "بالا بردن",
                    "Private Carbo was elevated to higher rank for his valor",
                    "Reading a variety* of good books elevates the mind",
                    "The candidate* spoke from an elevated platform"
                },
                {
                    "Lottery",
                    "طراحی برای توزیع جایزه با شانس",
                    "The merit* of a lottery is that everyone has an equal chance",
                    "We thought that a lottery was an absurd* way of deciding who should be the team captain",
                    "The rash* young man claimed the lottery prize only to find he had misread his number"
                },
                {
                    "Finance",
                    "فراهم کردن پول برای",
                    "The new employee* boasted of his skill in finance",
                    "Frank circulated* the rumor that his uncle would finance his way through college",
                    "Mrs. Giles retained* a lawyer to handle her finances"
                },
                {
                    "Obtain",
                    "به دست آوردن",
                    "An adolescent* is finding it increasingly difficult to obtain a good job without a diploma",
                    "David obtained accurate* information about college from his guidance counselor",
                    "Because this is a coeducational* school, different rules obtain here"
                },
                {
                    "Cinema",
                    "تصویر متحرک",
                    "Censors* have developed a rating system for the cinema",
                    "Today's cinema is full of homicides* and violence",
                    "A best-seller is often the source* of cinema stories"
                },
                {
                    "Event",
                    "رخداد",
                    "The greatest event in Ellie's life was winning the $1,000,000 lottery",
                    "We chose our seat carefully and then awaited the shot put event",
                    "There is merit* in gaining wisdom even after the event"
                },
                {
                    "Discard",
                    "کنار انداختن",
                    "Anna casually* discarded one boyfriend after another",
                    "Confident* that he held a winning hand, Slim refused to discard anything",
                    "Asked why he had discarded his family traditions,* Mr. Menzel remained mute"
                },
                {
                    "Soar",
                    "اوج گرفتن",
                    "We watched the soaring eagle skim* over the mountain peak",
                    "An ordinary man cannot comprehend* such soaring ambition",
                    "The senator's hopes for victory soared after his television appearance"
                },
                {
                    "Subsequent",
                    "آنچه بعد می آید",
                    "subsequent events* proved that Sloan was right",
                    "Further explanations will be presented in subsequent lectures",
                    "Though the enemy forces resisted* at first, they subsequently learned that their efforts were in vain"
                },
                {
                    "Relate",
                    "شرح دادن",
                    "The traveler related his adventures with some exaggeration",
                    "After viewing the cinema's* latest show, the observant* student was able to relate every detail",
                    "Would you say that misfortune* is related to carelessness"
                },
                {
                    "Stationary",
                    "بی حرکت",
                    "A factory engine is stationary",
                    "The population* of our town has been stationary for a decade",
                    "Caught in the middle of traffic, the frightened pedestrian* remained stationary in the busy street"
                }
            },
            {                             //------------------------فصل سی و ششم------------------------
                {
                    "Prompt",
                    "به موقع",
                    "Be prompt in assembling* your baggage",
                    "Terry's caution* prompted him to ask many questions before he consented",
                    "Larry was confident* he knew his lines well enough not to need any prompting"
                },
                {
                    "Hasty",
                    "خوب روی آن فکر نشده",
                    "A hasty glance* convinced him that he was being followed",
                    "Rather than make a hasty decision, Mr. Torres rejected* the offer",
                    "Myra apologized* for the hasty visit"
                },
                {
                    "Scorch",
                    "سوزاندن ملایم",
                    "The hot iron scorched the tablecloth",
                    "Farmers reported that their wheat was being scorched by the fierce* rays of the sun",
                    "Mr. Regan gave the class a scorching lecture* on proper behavior in the cafeteria"
                },
                {
                    "Tempest",
                    "طوفان خشن",
                    "The tempest drove the ship on the rocks",
                    "Following the weather report of the approaching* tempest, we were prompted* to seek immediate shelter",
                    "When Mr. Couche saw that a tempest was brewing over the issue, he hastily* called a meeting"
                },
                {
                    "Soothe",
                    "آرام کردن",
                    "With an embrace,* the mother soothed the hurt child",
                    "Heat soothes some aches; cold soothes others",
                    "Rosalie's nerves were soothed by the soft music"
                },
                {
                    "Sympathetic",
                    "موافق",
                    "Judge Cruz was sympathetic to the lawyer's plea* for mercy",
                    "Father was fortunately* sympathetic to my request to use the car on weekends",
                    "We were all sympathetic to Suzanne over her recent* misfortune"
                },
                {
                    "Redeem",
                    "جبران کردن",
                    "The property on which money has been lent is redeemed when the loan is paid back",
                    "My family was relieved* to hear that the mortgage had been redeemed",
                    "Mr. Franklin promptly* redeemed his promise to help us in time of need"
                },
                {
                    "Resume",
                    "دوباره شروع کردن",
                    "resume reading where we left off",
                    "Those standing may resume their seats",
                    "The violinist resumed playing after the intermission"
                },
                {
                    "harmony",
                    "هماهنگی",
                    "We hoped the incident would not disrupt* the harmony that existed between the brothers",
                    "I am sympathetic* to Warren because his plans are in harmony with mine",
                    "We responded* to the harmony of the song by humming along"
                },
                {
                    "Refrain",
                    "اجتناب کردن",
                    "refrain from making hasty* promises",
                    "Milo could not refrain from laughing at the jest",
                    "If you want to be heard, you must refrain from mumbling"
                },
                {
                    "Illegal",
                    "غیر قانونی",
                    "It is illegal to reveal* the names of juvenile* delinquents",
                    "Bigamy* is illegal in the United States",
                    "Mr. Worthington's illegal stock manipulations* led to his jail sentence"
                },
                {
                    "Narocotic",
                    "ماده ای که باعث خماری میشود",
                    "Opium is a powerful narcotic",
                    "We do not have adequate* knowledge of the narcotic properties of these substances",
                    "The doctor prescribed a narcotic medicine to soothe* the patient's suffering"
                }
            },
            {                             //------------------------فصل سی و هفتم------------------------
                {
                    "Heir",
                    "وارث",
                    "Though Mr. Sloane is the heir to a gold mine, he lives like a miser",
                    "The monarch* died before he could name an heir to the throne",
                    "It is essential* that we locate the rightful heir at once"
                },
                {
                    "Majestic",
                    "شریف",
                    "The lion is the most majestic creature of the jungle",
                    "In Greek mythology,* Mt. Olympus was the majestic home of the gods",
                    "The graduates marched into the auditorium to the music of the majestic symphony"
                },
                {
                    "Dwindle",
                    "جمع شدن",
                    "Our supply of unpolluted* water has dwindled",
                    "With no visible* signs of their ship, hopes for the men's safety dwindled with each passing hour",
                    "After the furious tempest,* the dwindling chances of finding the raft vanished* entirely"
                },
                {
                    "Surplus",
                    "اضافی",
                    "The bank keeps a large surplus of money in reserve",
                    "surplus wheat, cotton, and soybeans are shipped abroad",
                    "No mortal* ever considers* that he has a surplus of good things"
                },
                {
                    "Traitor",
                    "شخص خیانت کار",
                    "The patriot* sneered* when asked to stand on the same platform with the man who was accused of being a traitor",
                    "No villain* is worse than a traitor who betrays* his country",
                    "Do not call him a traitor unless you can verify* the charge"
                },
                {
                    "Deliberate",
                    "به دقت بررسی کردن",
                    "Rico's excuse was a deliberate lie",
                    "My grandfather walks with deliberate steps",
                    "Judge Sirica deliberated for a week before making his decision known"
                },
                {
                    "Vandal",
                    "آسیب زدن ناخواسته",
                    "Adolescent* vandals wrecked the cafeteria",
                    "The vandals deliberately* ripped the paintings from the wall",
                    "We could scarcely* believe the damage caused by the vandals"
                },
                {
                    "Drought",
                    "خشکسالی",
                    "Because of the drought, some farmers began to migrate* to more fertile* regions",
                    "In time of drought, the crops become scorched",
                    "As the drought wore on, people began to grumble against those who had squandered* water when it was more plentiful"
                },
                {
                    "Abide",
                    "تحمل کردن",
                    "The team decided unanimously* to abide by the captain's ruling",
                    "Senator Ervin abided by his promise not to allow demonstrations in the committee room",
                    "My mother cannot abide dirt and vermin"
                },
                {
                    "Unify",
                    "متحد کردن",
                    "The novel* traces the developments that unified the family",
                    "After the Civil War our country became unified more strongly",
                    "It takes a great deal of training to unify all these recruits into an efficient fighting machine"
                },
                {
                    "Summit",
                    "نوک",
                    "We estimated* the summit of the mountain to be twenty thousand feet",
                    "Do not underestimate* Ruth's ambition to reach the summit of the acting profession",
                    "The summit meeting of world leaders diminished* the threat* of war"
                },
                {
                    "Head",
                    "به دقت توجه کردن",
                    "I demand that you heed what I say",
                    "Florence pays no heed to what the signs say",
                    "Take heed and be on guard against those who try to deceive* you"
                }
            },
            {                             //------------------------فصل سی و هشتم------------------------
                {
                    "Biography",
                    "داستان مکتوب زندگی یک شخص",
                    "Our teacher recommended* the biography of the architect* Frank Lloyd Wright",
                    "The reading of a biography gives a knowledge of people and events* that cannot always be obtained* from history books",
                    "The biography of Malcolm X is a popular* book in our school"
                },
                {
                    "Drench",
                    "خیساندن",
                    "A heavy rain drenched the campus,* and the students had to dry out their wet clothing",
                    "The drenching rains resumed* after only one day of sunshine",
                    "His fraternity friends tried to drench him but he was too clever for them"
                },
                {
                    "Swarm",
                    "جمعیت",
                    "As darkness approached,* the swarms of children playing in the park dwindled* to a handful",
                    "The mosquitoes swarmed out of the swamp",
                    "Our campus* swarmed with new students in September"
                },
                {
                    "Wobble",
                    "نامنظم حرکت کردن",
                    "Little Perry thrust* his feet into the oversized shoes and wobbled over to the table",
                    "A baby wobbles when it begins to walk alone",
                    "Lacking experience on the high wire, the clown wobbled along until he reached the safetyofthe platform"
                },
                {
                    "Tumult",
                    "آشوب",
                    "The sailors' voices were too feeble* to be heard above the tumult of the storm",
                    "There was such a tumult in the halls we concluded* an accident had occurred",
                    "The dreaded* cry of aFire! caused a tumult in the theater"
                },
                {
                    "Kneel",
                    "زانو زدن",
                    "Myra knelt down to pull a weed from the drenched* flower bed",
                    "The condemned* man knelt before the monarch* and pleaded* for mercy",
                    "Kneeling over the still figure, the lifeguard tried to revive* him"
                },
                {
                    "Dejected",
                    "با روحیه ضعیف",
                    "His biography* related* that Edison was not dejected by failure",
                    "The defeated candidate* felt dejected and scowled* when asked for an interview",
                    "There is no reason to be dejected because we did not get any volunteers"
                },
                {
                    "Obedient",
                    "مایل به اطاعت",
                    "The obedient dog came when his master beckoned",
                    "obedient to his father's wishes, Guy did not explore* any further",
                    "When parents make reasonable requests of them, the majority* of my friends are obedient"
                },
                {
                    "Recede",
                    "برگشتن",
                    "As you ride past in a train, you have the unique* feeling that houses and trees are receding",
                    "Mr. Ranford's beard conceals* his receding chin",
                    "Always cautious,* Mr. Camhi receded from his former opinion"
                },
                {
                    "Tyrant",
                    "حاکم مطلق",
                    "Some tyrants of Greek cities were mild and fair rulers",
                    "The tyrant demanded loyalty* and obedience* from his subjects",
                    "Though Ella was a tyrant as director of the play, the whole cast was grateful* to her when the final curtain came down"
                },
                {
                    "Charity",
                    "بخشش به فقرا",
                    "A free hospital is a noble charity",
                    "The entire community is the beneficiary* of Henry's charity",
                    "The hired hand was too proud to accept help or charity"
                },
                {
                    "Verdict",
                    "قضاوت",
                    "The jury returned a verdict of guilty for the traitor",
                    "We were cautioned* not to base our verdict on prejudice",
                    "Baffled* by the verdict, the prosecutor* felt that the evidence* had been ignored"
                }
            },
            {                             //------------------------فصل سی و نهم------------------------
                {
                    "Unearth",
                    "کشف کردن",
                    "The digging of the scientists unearthed a buried city",
                    "A plot to defraud* the investors was unearthed by the F.B.I",
                    "The museum exhibited* the vase that had been unearthed in Greece"
                },
                {
                    "Depart",
                    "ترک کردن",
                    "We arrived in the village in the morning and departed that night",
                    "Stan was vague* about departing from his usual manner of choosing a partner",
                    "Vera was reluctant* to mention that her uncle had long since departed"
                },
                {
                    "Coincide",
                    "توافق",
                    "If these triangles were placed one on top of the other, they would coincide",
                    "Because Pete's and Jim's working hours coincide, and they live in the same vicinity,* they depart* from their homes at the same time",
                    "My verdict* on the film coincides with Adele's"
                },
                {
                    "Cancel",
                    "لغو کردن",
                    "The stamp was only partially* canceled",
                    "Because the first shipment contained defective* parts, Mr. Zweben canceled the rest of the order",
                    "Having found just the right man for the job, Captain Mellides canceled all further interviews"
                },
                {
                    "Debtor",
                    "بدهکار",
                    "If I borrow a dollar from you, I am your debtor",
                    "As a debtor who had received many favors from the banker, Mr. Mertz was reluctant* to testify against him",
                    "A gloomy* debtor's prison was once the fate of those who could not repay their loans"
                },
                {
                    "Legible",
                    "ساده و آشکار",
                    "Julia's handwriting is beautiful and legible",
                    "Nancy hesitated* in her reading because the words were scarcely* legible",
                    "Our teacher penalizes* us for compositions that are not legible"
                },
                {
                    "Placard",
                    "پوستر",
                    "Colorful placards announced an urgent* meeting",
                    "placards were placed throughout the neighborhood by rival* groups",
                    "Numerous* placards appeared around the city calling for volunteers"
                },
                {
                    "Contagious",
                    "مسری",
                    "Scarlet fever is contagious",
                    "I find that yawning is often contagious",
                    "Interest in the project was contagious, and soon all opposition to it collapsed"
                },
                {
                    "Clergy",
                    "روحانیون",
                    "We try never to hinder* the clergy as they perform their sacred* tasks",
                    "Friar Tuck was a member of the clergy who loved a jolly* jest",
                    "The majority* of the clergy felt the new morality* was a menace* to society"
                },
                {
                    "Customary",
                    "مرسوم",
                    "It was customary for wealthy Romans to recline* while they were dining",
                    "The Robin Williams movie received the customary rave* reviews from the critics",
                    "The traitor* rejected* the customary blindfold for the execution"
                },
                {
                    "Transparent",
                    "شفاف",
                    "Window glass is transparent",
                    "Colonel Thomas is a man of transparent honesty and loyalty",
                    "The homicide* was a transparent case of jealousy* that got out of hand"
                },
                {
                    "Scald",
                    "مایع داخل ریختن",
                    "Do not neglect* to scald the dishes before drying them",
                    "The scalding lava pouring from the mountain placed everyone in peril",
                    "By being hasty,* Stella scalded her hand"
                }
            },
            {                             //------------------------فصل چهلم------------------------
                {
                    "Epidemic",
                    "فراگیر",
                    "All of the schools in the city were closed during the epidemic",
                    "The depiction* ofviolence* in the movies has reached epidemic proportions",
                    "During the epidemic we were forbidden* to drink water unless it had been boiled"
                },
                {
                    "Obesity",
                    "چاقی مفرط",
                    "obesity is considered* a serious disease",
                    "The salesman tactfully* referred* to Jack's obesity as stoutness",
                    "At the medical convention the topic* discussed was the prevention of childhood obesity"
                },
                {
                    "Magnify",
                    "بیش از حد واقعی جلوه دادن",
                    "A microscope* is a magnifying glass",
                    "It seems that Mr. Steinmetz magnified the importance of the document* in his possession",
                    "Some people have a tendency* to magnify every minor* fault in others"
                },
                {
                    "Chiropractor",
                    "طبیب مفصلی",
                    "The chiropractor tried to relieve* the pain by manipulating* the spinal column",
                    "Mrs. Lehrer confirmed* that a chiropractor had been treating her",
                    "The chiropractor recommended hot baths between treatments"
                },
                {
                    "Obstacle",
                    "مانع",
                    "The soldiers were compelled* to get over such obstacles as ditches and barbed wire",
                    "Prejudice* is often an obstacle to harmony* among people",
                    "Prejudice* is often an obstacle to harmony* among people"
                },
                {
                    "Ventilate",
                    "هوای داخل را تغییر دادن",
                    "We ventilated the kitchen by opening the windows",
                    "The lungs ventilate the blood",
                    "There is merit* in ventilating the topic* of the prom before the entire senior class"
                },
                {
                    "Jeopardize",
                    "ریسک کردن",
                    "Soldiers jeopardize their lives in war",
                    "Mr. Marcos revised* his opinion of police officers after two of them had jeopardized their lives to save his drowning child",
                    "Though it jeopardized his chance for a promotion,* Mr. Rafael ventured* to criticize his boss"
                },
                {
                    "Negative",
                    "منفی",
                    "The captain gave a negative response* to the request for a leave",
                    "Three below zero is a negative quantity",
                    "A negative image is used to print a positive picture"
                },
                {
                    "Pension",
                    "پرداختی ای که دستمزد نیست",
                    "pensions are often paid because of long service, special merit,* or injuries received",
                    "The pension is calculated* on the basis of your last year's income",
                    "Mrs. Colby pensioned off her employee after thirty years of loyal* service"
                },
                {
                    "Vital",
                    "مربوط به حیات",
                    "We must preserve* and protect our vital resources",
                    "Eating is a vital function, the obese* man reminded me",
                    "The valiant* soldier died of a vital wound in Iraq"
                },
                {
                    "Municipal",
                    "مربوط به شهر یا ایالت",
                    "The state police assisted the municipal police in putting down the riot",
                    "There was only a mediocre* turnout for the municipal elections",
                    "The municipal government placed a ban* on parking during business hours"
                },
                {
                    "Oral",
                    "کلامی",
                    "An oral agreement is not enough; we must have a written promise",
                    "oral surgery is necessary to penetrate* to the diseased root",
                    "His unique* oral powers made Lincoln a man to remember"
                }
            },
            {                             //------------------------فصل چهل و یکم------------------------
                {
                    "Complacent",
                    "از خود راضی",
                    "Senator Troy denounced* the complacent attitude of the polluters* of our air",
                    "How can you be complacent about such a menace",
                    "I was surprised that Martin was so complacent about his brief part in the play"
                },
                {
                    "Wasp",
                    "زنبور",
                    "When the wasps descended* on the picnic, we ran in all directions",
                    "A swarm* of wasps attacked us as we were reclining* on the porch",
                    "The piercing* sting of a wasp can be very painful"
                },
                {
                    "Rehabilitate",
                    "به شهرت قبلی بازگرداندن",
                    "The old house was rehabilitated at enormous* expense",
                    "The former criminal completely rehabilitated himself and was respected by all",
                    "This wing of the house must be rehabilitated promptly,* as there is a danger it will collapse"
                },
                {
                    "Parole",
                    "قول شرف",
                    "The judge paroled the juvenile* offenders on condition that they report to him every three months",
                    "Since the prisoner has been rehabilitated,* his family is exploring* the possibility* of having him paroled",
                    "The fugitive* gave his parole not to try to escape again"
                },
                {
                    "Vertical",
                    "عمودی",
                    "It wasn't easy to get the drunken man into a vertical position",
                    "The way to vote for your candidate* is to pull the lever from the horizontal position to the vertical position",
                    "A circle surrounding a vertical line that ends in an inverted V is the well-known peace symbol"
                },
                {
                    "Multitude",
                    "یک جماعت",
                    "A multitude of letters kept pouring in to the movie idol",
                    "The fleeing* culprit* was pursued* by a fierce* multitude",
                    "Flood victims were aided by a multitude of volunteers"
                },
                {
                    "Nominate",
                    "به عنوان نامزد",
                    "Three times Bryant was nominated for office but he was never elected",
                    "The president nominated him for Secretary of State",
                    "Though Danny was nominated last, he emerged* as the strongest candidate"
                },
                {
                    "Potential",
                    "امکان در برابر واقعیت",
                    "Mark has the potential of being completely rehabilitated",
                    "The coach felt his team had the potential to reach the finals",
                    "Destroying nuclear weapons reduces a potential threat* to human survival"
                },
                {
                    "Morgue",
                    "سردخانه",
                    "There is a slender* chance that we can identifY* the body in the morgue",
                    "Bodies in the morgue are preserved* by low temperatures",
                    "In the morgue of the New York Times there are biographies* of most famous people"
                },
                {
                    "Preooccupied",
                    "درگیر",
                    "Getting to school in time for the test preoccupied Judy's mind",
                    "My boss is always preoccupied with ways of cutting down on the workers' lateness",
                    "Charity* cases preoccupied Mrs. Reynaldo's attention"
                },
                {
                    "Upholstery",
                    "روکش مبل",
                    "Our old sofa was given new velvet upholstery",
                    "The Browns' upholstery was so new that we were wary* about visiting them with the children",
                    "One hundred eighty-five dollars was the estimate* for changing the upholstery on the dining-room chairs"
                },
                {
                    "Indifference",
                    "عدم علاقه",
                    "Allen's indifference to his schoolwork worried his parents",
                    "It was a matter of indifference to Bernie whether the story circulating* about his engagement was true or not",
                    "My father could not refrain* from commenting on Linda's indifference toward her brother's tears"
                }
            },
            {                             //------------------------فصل چهل و دوم------------------------
                {
                    "Maintain",
                    "ادامه دادن",
                    "Angelo maintained his hold on the jagged* rock though his fingers were becoming numb",
                    "The judge maintained his opinion that the verdict* was fair",
                    "The pauper* was unable to maintain his family without the help of charity"
                },
                {
                    "Snub",
                    "سرد",
                    "Darryl later apologized* to Sally for snubbing her at the dance",
                    "Sandra was tormented* by the thought that she might be snubbed by her classmates",
                    "I considered* it a rude snub when I was not invited to the party"
                },
                {
                    "Endure",
                    "دوام آوردن",
                    "How can you endure such disrespect",
                    "The valiant* officer endured serious burns on September 11th",
                    "Dr. Hardy was confident* he could endure the hardships* of space travel"
                },
                {
                    "Wrath",
                    "خشم بسیار زیاد",
                    "Anticipating* Father's wrath, we tried to give him the news slowly",
                    "There is no rage* like the wrath of an angry bear",
                    "After Ernie's wrath subsided,* we were able to tell him what happened"
                },
                {
                    "Expose",
                    "بازگذاشتن",
                    "Soldiers in an open field are exposed to the enemy's gunfire",
                    "Foolish actions expose a person to the sneers* of others",
                    "The article exposed the vital* document* as a forgery"
                },
                {
                    "Legend",
                    "داستان هایی که از گذشته می آید",
                    "Stories about King Arthur and his knights are popular* legends",
                    "legend has exaggerated* the size of Paul Bunyan",
                    "The legend on the rare coin was scarcely* legible"
                },
                {
                    "Ponder",
                    "بدقت تامل کردن",
                    "Not wishing to act hastily,* the governor pondered the problem for days",
                    "After pondering the question, the board decided to grant the parole",
                    "The villagers, faced with a famine,* pondered their next move"
                },
                {
                    "Resign",
                    "تسلیم کردن",
                    "Vito resigned his position as editor* of the school paper",
                    "Upon hearing the news of the defeat, the football coach promptly* resigned",
                    "Upon examining the injury, the chiropractor* told Jim he had better resign himself to a week in bed"
                },
                {
                    "Drastic",
                    "با قدرت عمل کردن",
                    "The police took drastic measures to end the crime wave",
                    "The most drastic changes in centuries* have taken place during our lifetime",
                    "In the interests of justice,* drastic action must be taken"
                },
                {
                    "Wharf",
                    "اسکله",
                    "We watched the exhausted* laborers unloading the cargo on the wharf",
                    "The lawyer insisted* that his client* was never seen near the wharf where the crime had taken place",
                    "Waiting at the wharf for the supply ships to unload was a starving multitude* of people"
                },
                {
                    "Amend",
                    "اصلاح کردن",
                    "It is time you amended your ways",
                    "Each time they amended the plan, they made it worse",
                    "Rather than amend the club's constitution again, let us discard* it and start afresh"
                },
                {
                    "Ballot",
                    "برگه رای گیری",
                    "Clyde, confident* of victory, dropped his ballot into the box",
                    "After we counted the ballots a second time, Leo's victory was confirmed",
                    "To avoid embarrassing the candidates,* we ballot instead of showing hands"
                }
            }
        }
};

int MainDataBase::Number = 0;
