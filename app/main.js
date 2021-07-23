const { app, BrowserWindow } = require('electron');

function createWindow() {
    const win = new BrowserWindow({
        width: 1000,
        height: 700
    });
    win.setTitle('EasyRandomer - by YukiChiyoda');
    win.setMenu(null);
    win.setBackgroundColor('#FFFAFA');
    win.loadFile('./src/index.html');

    // Dev Tools
    // win.webContents.openDevTools();
    // win.setAlwaysOnTop(true);
    // win.setBounds({ x: 1020, y: 320 });
}

app.setAppUserModelId('EasyRandomer');

app.whenReady().then(() => {
    createWindow();
});

try {
    require('electron-reloader')(module);
} catch (_) { }