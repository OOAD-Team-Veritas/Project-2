class Zoo:
	zooAnimals = []
	zooOperations = False # zoo is closed at first

	def addAnimal(self, newAnimal):
		self.zooAnimals.append(newAnimal)

	def openZoo(self):
		self.zooOperations = True
		print("Zoo is now open!")

	def closeZoo(self):
		self.zooOperations = False
		print("Zoo is now closed!")
