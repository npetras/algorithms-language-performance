import com.nicolaspetras.linearSearch
import org.junit.jupiter.api.Test

class Search {

    @Test
    fun `linear search test ascending integers`() {
        val array = intArrayOf(1, 2, 3, 4, 5)
        val target = 3
        val expected = 2
        val result = linearSearch(array, target)
        assert(result == expected)
    }
}