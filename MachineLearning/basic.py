# import nltk
# nltk.download( 'brown')
# from nltk.corpus import brown
# print(brown.categories())
# c = brown.categories()
# # for ci in c:
# #      w_c = len(brown.words( categories = ci ))
# #      print( ci , w_c )

# s_w = brown.words( categories = 'news')
# v = set(s_w)
# print(len(v))
# print(len(s_w))


# code 2 
#  here we  have downloaded the punctuation lib. it divides the sentences into tokens . and prints the list .

# nltk.download('punkt_tab')
#  for sentences use sent_tokenize
#  for words use word_tokenize

# from nltk.tokenize import sent_tokenize  
# from nltk.tokenize import word_tokenize  
# from nltk.tokenize import word_tokenize      
# text = "NLTK is powerful. it is used in nlp"
# t = word_tokenize( text)
# print(t)

# for whitespaces
# from nltk.tokenize import WhitespaceTokenizer     
# text = "NLTK is powerful . it is used in nlp"
# t = WhitespaceTokenizer()
# ti = t.tokenize(text)
# print(ti)


# regular expression tokenixer ( romves comma and )
# from nltk.tokenize import RegexpTokenizer
# text = " NLTK  , version 3.8 , is powerful ."
# t  = RegexpTokenizer( r'\w+')
# ti = t.tokenize(text)
# print(ti)


# includes comma as well 
# from nltk.tokenize import TreebankWordTokenizer
# text = " NLTK  , @version 3.8 , is powerful ."
# t  = TreebankWordTokenizer()
# ti = t.tokenize(text)
# print(ti)

# includes emojis as well
# from nltk.tokenize import TweetTokenizer
# text = " ai is powerful 😊 https : /// hdfre.com "
# t = TweetTokenizer()
# ti = t.tokenize(text)
# print(ti)



# stemming

# 1. by porter stemmer
# from nltk.stem import PorterStemmer 
# ps = PorterStemmer()
# w = ps.stem("running")
# print(w)

# 2. snowball stemmer . here we need to define the language as well
# from nltk.stem import SnowballStemmer 
# ps = SnowballStemmer("english") 
# w = ps.stem("running")
# r = ps.stem("studies")
# print(w)
# print(r)

# 3. by lancaster stemmer
# from nltk.stem import LancasterStemmer
# ps = LancasterStemmer()
# w = ps.stem( "runner")
# print(w)

# nltk.download('wordnet')
# from nltk.stem import WordNetLemmatizer
# lemmatizer = WordNetLemmatizer()
# # it is imoprtant to define the pos here otherwise it will consider the word as a noun and print as running
# print(lemmatizer.lemmatize("better", pos = 'a'))  


# here we have tokenize our text firstly then we have printed a list for all stemmers 
# from nltk.stem import PorterStemmer
# from nltk.stem import SnowballStemmer
# from nltk.stem import LancasterStemmer
# from nltk.tokenize import word_tokenize 

# text = "developer development developed developing "
# token = word_tokenize(text)
# ps = PorterStemmer()
# ss = SnowballStemmer("english")
# ls = LancasterStemmer()
# print([ps.stem(w) for w in token])
# print([ss.stem(w) for w in token])
# print([ls.stem(w) for w in (token])

# import string 
# s = ["the cat is ","one the lane " , "out of time "]
# corpus = " ".join(s)

# import string 
# from nltk.tokenize import word_tokenize

# s = [" i love nlp" , "i love machine learning" , "nlp in fun"]
# corpus = " ".join(s)
# corpus = corpus.upper()

# token = word_tokenize(corpus)
# print(token)
# print(corpus)


# nltk.download('punkt_tab')




# import string
# from nltk.tokenize import word_tokenize
#  s = [" i love nlp" , "i love machine learning" , "nlp in fun"]
# corpus = " ".join(s)
# corpus = corpus.upper()
# token = word_tokenize(corpus.lower())

# new_token = [w for w in token 
#              if w not in string.punctuation 
#              ]

# vocab = set(new_token)

# print(vocab)
# print(new_token)

# import string
# import math
# from nltk.corpus import stopwords

# nltk.download("stopwords")

# docs = [
#     'I love Machine Learning',
#     'Machine Learning is fun',
#     'I love fun'
# ]

# docs = [doc.lower() for doc in docs]

# tokenized_docs = [doc.split() for doc in docs]

# tokenized_docs = [
#     [word for word in doc if word not in string.punctuation]
#     for doc in tokenized_docs
# ]

# stop_words = set(stopwords.words('english'))

# clean_docs = [
#     [word for word in doc if word not in stop_words]
#     for doc in tokenized_docs
# ]

# print("Clean Documents:")
# print(clean_docs)

# vocab = sorted(set(word for doc in clean_docs for word in doc))
# print("\nVocabulary:")
# print(vocab)

# def compute_tf(doc):
#     tf_dict = {}
#     total_words = len(doc)
#     for word in vocab:
#         tf_dict[word] = doc.count(word) / total_words
#     return tf_dict

# tf_list = [compute_tf(doc) for doc in clean_docs]

# print("\nTF:")
# for i, tf in enumerate(tf_list):
#     print(f"Doc {i+1}:", tf)

# N = len(clean_docs)
# idf_dict = {}

# for word in vocab:
#     df = sum(1 for doc in clean_docs if word in doc)
#     idf_dict[word] = math.log(N / df)

# print("\nIDF:")
# print(idf_dict)


# tf_idf = []

# for tf_doc in tf_list:
#     doc_tfidf = {}
#     for word in vocab:
#         doc_tfidf[word] = tf_doc[word] * idf_dict[word]
#     tf_idf.append(doc_tfidf)

# print("\nTF-IDF:")
# for i, doc in enumerate(tf_idf):
#     print(f"Doc {i+1}:", doc)




# import numpy as np
# x = np.array([2,5,3,6,2,1,9])
# sigmoid = 1 / ( 1 + np.exp(-x))
# tanh1 = np.max( 0 , x )
# print( tanh1) 
# print( sigmoid )  

# import numpy as np
# X = np.array([2,3])
# W = np.array([0.5,0.8])
# b = 0.2
# y = np.dot(X, W) + b
# z = max(0,y)   #Relu
# print(z)

# from tensorflow.keras.models import Sequential
# from tensorflow.keras.layers import Dense

# model = Sequential()

# # Hidden Layer
# model.add(Dense(4, input_dim = 2, activation = 'relu'))

# # Output Layer
# model.add(Dense(1, activation = 'sigmoid'))


# from tensorflow.keras.models import Sequential
# from tensorflow.keras.layers import Dense
# import numpy as np

# model = Sequential()

# X = np.array([[0,0],[0,1],[1,0],[1,1]])
# Y = np.array([0,1,1,0])

# # Hidden Layer
# model.add(Dense(4, input_dim = 2, activation = 'relu'))

# # Output Layer
# model.add(Dense(1, activation = 'sigmoid'))

# # Compile model
# model.compile(loss = 'binary_crossentropy', optimizer = 'adam')

# # Fit the model
# model.fit(X, Y, epochs=10)

# print(model.predict(X))


# from tensorflow.keras.models import Sequential
# from tensorflow.keras.layers import Dense
# import numpy as np 

# model = Sequential()

# X = np.array([[2,3],[3,6],[5,6],[6,7],[8,5],[1,4]])
# Y = np.array([0,0,0,1,1,0])

# # Hidden Layer
# model.add(Dense(6, input_dim=2, activation='relu'))

# # Output Layer 
# model.add(Dense(1, activation='sigmoid'))

# # Compile model
# model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])

# model.fit(X, Y, epochs=10)


# print(model.predict(X))

# test = np.array([[1,2]])
# pred = model.predict(test)

# print(model.predict(test))


import numpy as np
import tensorflow as tf
from tensorflow.keras.preprocessing.text import Tokenizer

s = ["I", "love", "AI"]

for word in s:
    print(word)
    
x = [1,2,3]
h=0
for i in x:
    h = h + i
    print(h)
print()

t = Tokenizer()
s2 = ["I love AI", "AI is amazing love AI"]
t.fit_on_texts(s2)
print(t.texts_to_sequences(s2))
# print(t)





