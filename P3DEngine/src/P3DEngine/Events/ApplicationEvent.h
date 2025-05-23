#pragma	once
#include "Event.h"
#include <sstream>

namespace P3D
{
	// Base class for all events
	class P3D_API WindowsizeEvent : Event
	{
	public:
		WindowsizeEvent(int width, int height)
			: m_Width(width), m_Height(height) {
		}
		inline int GetWidth() const { return m_Width; }
		inline int GetHeight() const { return m_Height; }
		::std::string ToString() const override
		{
			::std::stringstream ss;
			ss << "WindowResizeEvent: " << m_Width << ", " << m_Height;
			return ss.str();
		}
		EVENT_CLASS_TYPE(WindowResize)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)

	private:
		int m_Width, m_Height;
	};
	class WindowCloseEvent : public Event
	{
	public:
		WindowCloseEvent() {
		}
		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowCloseEvent";
			return ss.str();
		}
		EVENT_CLASS_TYPE(WindowClose)
			EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class AppTickEvent : public Event {

		AppTickEvent() {
		}
		EVENT_CLASS_TYPE(AppTick)
			EVENT_CLASS_CATEGORY(EventCategoryApplication)


	};
	class AppUpdateEvent : public Event {

	public:
		AppUpdateEvent() {
		}

		EVENT_CLASS_TYPE(AppUpdate)
			EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class AppRenderEvent : public Event {

	public:
		AppRenderEvent() {
		}
		EVENT_CLASS_TYPE(AppRender)
			EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};



}
		
