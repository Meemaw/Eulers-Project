import scala.annotation.tailrec



class Project55 {

  def calculate(): Int = {

    def loop(current : Int, meja: Int, returned_value: Int): Int = {
        if(current >= meja) returned_value
        else {
          if(isLycherel(current)) loop(current+1,meja,returned_value+1)
          else loop(current+1, meja, returned_value)
        }
    }
    loop(0,10000,0)
  }


  def isLycherel(n: BigInt): Boolean = {

    def checkNumber(toCheck : BigInt, current : Int, bound: Int): Boolean = {

      @tailrec def reverse(toReverse: BigInt, reversed: BigInt): BigInt = {
        if(toReverse == 0) reversed
        else reverse(toReverse / 10, reversed * 10 + toReverse % 10)
      }

      def isPalindrome(checkPalindrome: BigInt): Boolean = {
        checkPalindrome.toString.reverse == checkPalindrome.toString
      }
      val x = toCheck + reverse(toCheck,0)

      if(current >= bound) true
      else if(isPalindrome(x)) false
      else checkNumber(x, current + 1, bound)
    }


    checkNumber(n,0,50)

  }

  calculate()



}


