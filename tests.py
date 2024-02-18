import unittest
from functions import isPrime, nextPrime

class TestPrime(unittest.TestCase):
    def testIsPrime(self):
        self.assertTrue(isPrime(5)),
        self.assertFalse(isPrime(6))
        self.assertFalse(isPrime(10))
        self.assertFalse(isPrime(121))
        self.assertFalse(isPrime(77))
        self.assertTrue(isPrime(23))
        self.assertTrue(isPrime(19))
        self.assertTrue(isPrime(11))

    def testNextPrime(self):
        self.assertEqual(nextPrime(10), 11)
        self.assertEqual(nextPrime(-10), 2)
        self.assertEqual(nextPrime(0), 2)
        self.assertEqual(nextPrime(1), 2)
        self.assertEqual(nextPrime(13), 17)
        self.assertEqual(nextPrime(121), 127)
        self.assertEqual(nextPrime(1000), 1009)

if __name__ == '__main__':
    unittest.main()