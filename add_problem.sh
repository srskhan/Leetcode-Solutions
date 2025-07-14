#!/bin/bash

# Constants
BASE_DIR="$HOME/Desktop/leetcode-solutions"

# Usage
if [ "$#" -ne 3 ]; then
  echo "Usage: leetcode category problem_name language"
  echo "Example: leetcode Arrays move_zeroes cpp"
  exit 1
fi

CATEGORY=$1
PROBLEM_NAME=$2
LANG=$3
CATEGORY_PATH="$BASE_DIR/$CATEGORY"

# Make sure category folder exists
mkdir -p "$CATEGORY_PATH"

# Final file path
if [ "$LANG" = "cpp" ]; then
  FILE="$CATEGORY_PATH/${PROBLEM_NAME}.cpp"
  if [ ! -f "$FILE" ]; then
    cat <<EOF > "$FILE"
/*
🔹 Problem: ${PROBLEM_NAME//_/ }
🔗 https://leetcode.com/problems/${PROBLEM_NAME//_/-}/
🧠 Approach: 
⏱️ Time: 
📦 Space: 
*/

class Solution {
public:
    // Your code here
};
EOF
    echo "✅ Created $FILE"
  else
    echo "⚠️ $FILE already exists"
  fi

elif [ "$LANG" = "py" ]; then
  FILE="$CATEGORY_PATH/${PROBLEM_NAME}.py"
  if [ ! -f "$FILE" ]; then
    cat <<EOF > "$FILE"
# 🔹 Problem: ${PROBLEM_NAME//_/ }
# 🔗 https://leetcode.com/problems/${PROBLEM_NAME//_/-}/
# 🧠 Approach: 
# ⏱️ Time: 
# 📦 Space: 

class Solution:
    def method(self):
        pass
EOF
    echo "✅ Created $FILE"
  else
    echo "⚠️ $FILE already exists"
  fi
else
  echo "❌ Language must be 'cpp' or 'py'"
  exit 1
fi

# VS Code এ ফাইল খুলো
code "$FILE"
