import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.DisplayName;

import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertEquals;

public class PrimerTest {
    Primer primer = new Primer();

    @Test
    @DisplayName("Test isPrime")
    public void testIsPrime() {
        assertTrue(primer.isPrime(5));
        assertFalse(primer.isPrime(6));
        assertFalse(primer.isPrime(10));
        assertFalse(primer.isPrime(121));
        assertTrue(primer.isPrime(23));
        assertTrue(primer.isPrime(11));
    }

    @Test
    @DisplayName("Test nextPrime")
    public void testNextPrime() {
        assertEquals(primer.nextPrime(10), 11);
        assertEquals(primer.nextPrime(-10), 2);
        assertEquals(primer.nextPrime(0), 2);
        assertEquals(primer.nextPrime(1), 2);
        assertEquals(primer.nextPrime(13), 17);
        assertEquals(primer.nextPrime(121), 127);
    }
}