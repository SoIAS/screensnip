#include "settings.h"

Settings::Settings() :
	settings_{"SoIAS", "ScreenSnip"}
{
	
}

Settings& Settings::instance()
{
	static Settings settings{};

	return settings;
}

void Settings::setSnipWidgetHotkey(const QString& hotkey)
{
	settings_.setValue(snipWidgetHotkeySettingsKey(), hotkey);
}

QString Settings::getSnipWidgetHotkey() const
{
	return settings_.value(snipWidgetHotkeySettingsKey(), "").toString();
}

void Settings::setEntireScreenshotHotkey(const QString& hotkey)
{
	settings_.setValue(entireScreenshotHotkeySettingsKey(), hotkey);
}

QString Settings::getEntireScreenshotHotkey() const
{
	return settings_.value(entireScreenshotHotkeySettingsKey(), "").toString();
}

QString Settings::snipWidgetHotkeySettingsKey()
{
	return "hotkeys/snip_widget_hotkey";
}

QString Settings::entireScreenshotHotkeySettingsKey()
{
	return "hotkeys/entire_screenshot_hotkey";
}