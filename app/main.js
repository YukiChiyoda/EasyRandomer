const { app, BrowserWindow } = require('electron');

function createWindow() {
    const win = new BrowserWindow({
        width: 1600,
        height: 900
    });

    win.loadFile('./src/index.html');
}

app.whenReady().then(() => {
    createWindow();
});