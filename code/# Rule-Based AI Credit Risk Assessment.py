
import pandas as pd

# Import datasets
training_data = pd.read_csv("training_data.csv")
test_data = pd.read_csv("test_data.csv")


class RuleBasedAI:

    def __init__(self):

        self.threshold = 7

        # Risk scoring rules
        self.rules = {
            "housing": {
                "rent": 2,
                "free": 1,
                "own": 0
            },

            "savings": {
                "little": 3,
                "moderate": 2,
                "rich": 1,
                "quite rich": 0
            },

            "checking": {
                "little": 3,
                "moderate": 2,
                "rich": 1
            },

            "purpose": {
                "education": 1,
                "vacation/others": 1,
                "car": 1,
                "furniture/equipment": 1,
                "radio/tv": 1,
                "business": 1,
                "domestic appliance": 1,
                "repairs": 1
            }
        }

    # Calculate customer risk score
    def calculate_score(self, person_Data):

        score = 0

        housing = str(person_Data["Housing"]).strip().lower()
        score += self.rules["housing"].get(housing, 0)

        savings = str(person_Data["Saving accounts"]).strip().lower()
        score += self.rules["savings"].get(savings, 0)

        checking = str(person_Data["Checking account"]).strip().lower()
        score += self.rules["checking"].get(checking, 0)

        duration = float(person_Data["Duration"])

        if duration > 24:
            score += 2

        credit = float(person_Data["Credit amount"])

        if credit > 4000:
            score += 2

        purpose = str(person_Data["Purpose"]).strip().lower()
        score += self.rules["purpose"].get(purpose, 0)

        return score

    # Display final risk assessment
    def respond(self, person_Data):

        score = self.calculate_score(person_Data)

        if score > self.threshold:
            decision = "High Risk"

        elif score == self.threshold:
            decision = "Moderate Risk"
        else:
            decision = "Low Risk"

        print("\n" + "=" * 40)
        print("       CREDIT RISK ASSESSMENT")
        print("=" * 40)
        print("Customer ID:", person_Data["ID"])
        print("Final Score:", score)
        print("Decision:", decision)
        print("=" * 40)

        return decision


# Run the AI
if __name__ == "__main__":

    ai = RuleBasedAI()

    for index, person in test_data.iterrows():
        ai.respond(person)
