let num;

function startGame() {
    // Generate a random number between 1 and 6
    num = Math.floor(Math.random() * 6) + 1;
    // Show the game section
    document.getElementById('game').style.display = 'block';
    document.getElementById('result').innerText = '';
}

function quitGame() {
    document.getElementById('result').innerText = 'Quitting the game';
    document.getElementById('game').style.display = 'none';
}

function checkGuess() {
    const guess = parseInt(document.getElementById('guess').value);
    if (guess === num) {
        document.getElementById('result').innerText = 'You win!';
    } else {
        document.getElementById('result').innerText = `Incorrect num. Correct number was: ${num}`;
    }
    document.getElementById('game').style.display = 'none';
}