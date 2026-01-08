
# pip install pyttsx3
import pyttsx3 

# Initialize the TTS engine
engine = pyttsx3.init()

# Text to speak
text = "Hello, world! shalom"

# Enqueue the text to be spoken
engine.say(text)

# Block while processing all the currently queued commands
engine.runAndWait()
